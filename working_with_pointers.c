#include<stdio.h>

int main(){

	int a;
	int *p;
	int b;

	a = 10;
	p = &a;
	printf("%d\n",p); //prints address
	printf("%d\n",*p); // value of p
	printf("%d\n",&a); //address of a 
	printf("a = %d\n",a);	
	*p = 12; //value of address of p is 12 
	printf("a = %d\n",a);
	*p = b;
	printf("%d\n",b);
	printf("Address of p is %d\n",p);
	
//	int *p = &a;

	printf("Address of p is%d\n",p);
	printf("Size of integer is%d byets\n",sizeof(int));
	printf("Address of p+1 is %d\n",p+1);
		

}
