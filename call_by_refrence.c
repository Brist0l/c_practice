#include<stdio.h>

void increment(int a){
	a = a+1;
	printf("Address of a in increment is  %d\n",&a);

}

int main(){
	int a;
	a = 10;
	increment(a);
	printf("The Address of a in main is %d\n",&a);


}
