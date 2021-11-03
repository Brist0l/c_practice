#include<stdio.h>

int main(){
	
	int a[5] = {10,20,30,40,50};

	printf("Address of a = %d\n",&a);
	int size = sizeof(a);
	printf("Size = %d",size);
}
