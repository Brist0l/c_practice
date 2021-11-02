#include<stdio.h>

int main(){

	int a = 1025;
	int *p;
	p = &a;

	printf("Size of int is %d\n",sizeof(int));
	printf("Address = %d , value = %d\n",p,*p);
	printf("Address = %d , value = %d\n",p+1,*(p+1));

	char *p0;

	p0 = (char*)p; //typecasting

	printf("Size of char is %d bytes \n",sizeof(char));
	printf("Address = %d,value = %d\n",p0,*p0);
	// it prints value of p = 1 because binary of 1025 = 00000 - - 0000001
	// so char looks at only one byte
	printf("Address = %d,value = %d\n",p0+1,*(p0+1));
	// it prints value of p+1 = 4 because binary of 1025 on the 2nd byte is `4` in binary
}
