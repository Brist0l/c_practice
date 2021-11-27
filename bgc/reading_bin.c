#include<stdio.h>

int main(){

	FILE *fp;
	unsigned char c;

	fp = fopen("./cc.out","rb");

	while(fread(&c,sizeof(char),1,fp) > 0){
		printf("%d\n",c);
	}
}
