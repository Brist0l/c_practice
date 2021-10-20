#include<stdio.h>
#include<ctype.h>

int main(){
	
	char unit;
	float temp;

	printf("Type Something:");
	scanf("%c",&unit);

	char upper = toupper(unit); // tolower

	printf("the upper case is %c",upper);
		


}
