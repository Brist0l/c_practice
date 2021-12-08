#include<stdio.h>
#include<stdlib.h>

int main(void){

	char *val = getenv("PATH");

	if (val == NULL){
		printf("Cannot find %s",val);

		return EXIT_FAILURE;
	}

	printf("Value: %s\n",val);
}
