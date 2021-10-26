#include<stdio.h>

void hello(char[],int);

int main(){
	
	char name[] = "Gautam";
	int age = 16;

	hello(name,age);

}

void hello(char name[] , int age){

	printf("Hello %s ",name);
	printf("U r %d",age);
}
