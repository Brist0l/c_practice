#include<stdio.h>

int main(){
	FILE *fp;
	char s[1024];
	int linecount = 0;

	fp = fopen("./hello.txt","r");

	while(fgets(s,sizeof s,fp) != NULL){
		printf("%d: %s",++linecount,s);
	
	}

	fclose(fp);
}
