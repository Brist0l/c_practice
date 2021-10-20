#include<stdio.h>

int main(){

	char grade;

	printf("\nEnter Grade :");
	scanf("%c",&grade);

	switch(grade){
		case 'A':
			printf("ok");
			break;
		case 'B':
			printf("Not ok");
			break;
		default:
			printf("Hmmmm");
	}
}
