#include<stdio.h>
#include<stdint.h>
#include<libavcodec/avcodec.h>

#define AUDIO_INBUF_SIZE 20480

static void decode(AVCodecContext *dec_ctx,AVPacket *pkt,AVFrame *frame,FILE *outfile){
	int i,ch;
	int ret,data_size;
	
	// send the packet with compressed data to the decoder
	ret = avcodec_send_packet(dec_ctx,pkt); // Supply raw packet data as input to a decoder. 
	printf("Ret Result:%d\n",ret);
	if(ret < 0){
		fprintf(stderr,"Error summiting the packet to the decoder\n");
		exit(1);
	}
	
	// Read all the output frames ( there can be any number of them)
	while(ret >= 0){
		ret = avcodec_receive_frame(dec_ctx,frame);//Return decoded output data from a decoder. 
		printf("Ret Result:%d\n",ret);
		if(ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
			return;
		else if(ret < 0){
			fprintf(stderr,"Error During Decoding\n");
			exit(1);
		}
		
		data_size = av_get_bytes_per_sample(dec_ctx->sample_fmt);
		if(data_size < 0){
			fprintf(stderr,"Failed To Calculate Data Size\n");
			exit(1);
		}
		for(i = 0;i<frame->nb_samples;i++){
			for(ch = 0;ch < dec_ctx->channel_layout;ch++)
				fwrite(frame->data[ch] + data_size*i, 1, data_size, outfile);
		}
	}
}
int main(int argc,char *argv[]){
	const char *outfilename,*filename;
	const AVCodec *codec;
	
	AVCodecContext *c = NULL;
	AVCodecParserContext *parser = NULL;
	
	int len,ret;
	FILE *f,*outfile;
	uint8_t inbuf[AUDIO_INBUF_SIZE + AV_INPUT_BUFFER_PADDING_SIZE];
	uint8_t *data;
	size_t data_size;
	AVPacket *pkt;
	AVFrame *decoded_frame = NULL;
	enum AVSampleFormat sfmt;
	int n_channels = 0;
	const char *fmt;
	
	if(argc <= 2){
		fprintf(stderr,"Usage: %s <input file> <output file>\n",argv[0]);
		exit(0);
	}

	// Both are constant string values
	filename = argv[1];
	outfilename = argv[2];

	pkt = av_packet_alloc(); // Allocates an a structure which is used to store compressed data(AVPacket)
	
	// Finding The MPEG code of the file
	// MPEG can be of many types including mp3
	codec = avcodec_find_decoder(AV_CODEC_ID_MP2);
	printf("Codec Name:%s\n",codec->long_name);
	if(!codec){
		fprintf(stderr,"Codec Not Found\n");
		exit(1);
	}
	
	printf("Codec ID:%d\n",codec->id);
	parser = av_parser_init(codec->id);
	if(!parser){
		fprintf(stderr,"Parser Not Found\n");
		exit(1);
	}

	c = avcodec_alloc_context3(codec);
	if(!c){
		fprintf(stderr,"Could Not Allocate Audio Code Context\n");
		exit(1);
	}
	
	//Opening it
	if(avcodec_open2(c,codec,NULL) < 0){
		fprintf(stderr,"Could not open codec\n");
		exit(1);
	}
	
	f = fopen(filename,"rb");
	if(!f){
		fprintf(stderr,"Could not open %s\n",filename);
		exit(1);
	}

	outfile = fopen(outfilename,"wb");
	if(!outfilename){
		av_free(c);
		exit(1);
	}

	// Decode until EOF
	data = inbuf;
	data_size = fread(inbuf,1,AUDIO_INBUF_SIZE,f);	
	printf("Data size:%ld\n",data_size);
	
	while(data_size > 0){
		if(!decoded_frame){
			if(!(decoded_frame = av_frame_alloc())){
				fprintf(stderr,"Could Not Allocate Audio Frames\n");
				exit(1);
			}
		}

		ret = av_parser_parse2(parser,c,&pkt->data,&pkt->size,data,data_size,AV_NOPTS_VALUE,AV_NOPTS_VALUE,0);
		printf("Ret:%d\n",ret);
		if(ret<0){
			fprintf(stderr,"Error while parsing\n");
		}
		data += ret;
		data -= ret;

		if(pkt->size)
			decode(c, pkt, decoded_frame, outfile);
	}
}
