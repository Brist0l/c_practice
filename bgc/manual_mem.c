#include<stdio.h>
#include<stdlib.h>

int main(){

	int *p = malloc(sizeof(int));

	*p = 12;

	printf("%d\n",*p);

	free(p);
	
	*p = 20;
	printf("%d",*p);
}
