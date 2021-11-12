#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p = (int*)malloc(3 * sizeof(int));
	printf("%d\n",p);
	
	int *x = (int *)calloc(3,sizeof(int));
	printf("%d",sizeof(x));
}
