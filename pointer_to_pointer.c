#include<stdio.h>


int main(){
	int x =5;
	int *p;
	p = &x;
	*p = 6;
	int **q;
	q = &p;
	int ***r = &q;
	printf("%d\n",*p);	
	printf("%d\n",*q);	
	printf("%d\n",**q);	
	printf("%d\n",**r);
	printf("%d\n",***r);

	return 0;

}
