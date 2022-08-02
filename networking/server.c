#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<netdb.h>
#include<stdlib.h>
#include<signal.h>
#include<stdio.h>

#define PORT "6969"

#define BACKLOG 10

int main(){
	int sockfd,new_fd; // listen on sockfd,new connection new_fd
	struct addrinfo hints,*servinfo,*p;
	struct sockaddr_storage their_addr;
	socklen_t sin_size;
	struct sigaction sa;
	int yes = 1;
	char s[INET6_ADDRSTRLEN];
	int rv;
	
	memset(&hints,0,sizeof hints);
	hints.ai_family = AF_UNSPEC;	// use IPv4 or IPv6 , whichever
	hints.ai_socktype = SOCK_STREAM; // TCP
	hints.ai_flags = AI_PASSIVE; // Use My IP

	if((rv = getaddrinfo(NULL,PORT,&hints,&servinfo)) != 0){
		fprintf(stderr,"getaddrinfo: %s\n",gai_strerror(rv));	
		return 1;
	}

	for(p =servinfo;p!=NULL;p = p->ai_next){
		if((sockfd = socket(p->ai_family,p->ai_socktype,
						p->ai_protocol)) == -1){
			perror("server: socket");
			continue;
		}

		if(setsockopt(sockfd,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int)) == -1){
			perror("setsockopt");
			exit(1);
		}

		if(bind(sockfd,p->ai_addr,p->ai_addrlen) == -1){
			close(sockfd);
			perror("server:bind");
			continue;
		}
	break;
	}

	freeaddrinfo(servinfo);

	if(p == NULL){
		fprintf(stderr,"server: failed to bind\n");
		exit(1);
	}

	printf("Listening...");
	if(listen(sockfd,BACKLOG) == -1){
		perror("listen");
		exit(1);
	}
}

