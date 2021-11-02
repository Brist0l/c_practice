#include<stdio.h>

int main(){

	int a; //normal 
	int *p; //pointer

	p = &a; // address of `a`

	a = 5;

	printf("%d\n",p);
	printf("%d\n",&a);
	printf("%d\n",&p);
	printf("%d",*p); //derencing 
	*p = 8;
	printf("%d\n",a);

	// & = address of variable
	// * = value of variable
}
