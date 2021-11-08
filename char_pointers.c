#include<stdio.h>
#include<string.h>

void print(char *string){
	printf("%s",string);
}

int main(){

	// Rule - A string in C has to be a null terminated
	char c[5];
	c[0] = 'J';
	c[1] = 'O';
	c[2] = 'H';
	c[3] = 'N';
	c[4] = '\0';
	int lenght = strlen(c);
	printf("%s\n",c);
	printf("Lenght is : %d",lenght);
	
	print(c);

}
