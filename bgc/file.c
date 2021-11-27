#include<stdio.h>

int main(){
	FILE *fp;
	int c;

	fp = fopen("./hello.txt","r");

	
	printf("%c",fgetc(fp));
	while((c=fgetc(fp)) != EOF){
		printf("%c",c);
	}

	fclose(fp);

}
