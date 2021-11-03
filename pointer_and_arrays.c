#include<stdio.h>

int main(){
	
	int a[] = {10,20,30,40,50};

	printf("Address of a = %d\n",&a);
	int size = sizeof(a);
	printf("Size = %d\n",size);

	printf("address of a[0] is : %d\n",&a[1]);
	for(int i=0;i<5;i++){
		printf("Address = %d\n",&a[i]);

	
	}
}
