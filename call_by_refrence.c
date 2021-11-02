#include<stdio.h>

void increment(int *p){
	*p = *p + 1;
	printf("Address of a in increment is  %d\n",p);

}

int main(){
	int a;
	a = 10;
	increment(&a);
	printf("The Address of a in main is %d\n",&a);
	printf("%d",a);

}
