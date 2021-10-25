#include<stdio.h>

void hello(char name[]){

	printf("Hello %s",name);
}

int main(){
	
	char name1[] = "Gautam";
	
	hello(name1);
	
	return 0;
}
