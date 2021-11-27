#include<stdio.h>

int main(void){
	
	int i = 10;
	int *p;

	p = &i;
	printf("%p\n",p);
	
	*p = 20;
	printf("%d,%d\n",i,*p);

	printf("The value is %d and address is %p",i,&i);

	return 0;
}
