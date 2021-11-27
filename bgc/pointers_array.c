#include<stdio.h>
#include<stdlib.h>

int calculate_len(int array[]){
	int len;
	len = sizeof(array)/sizeof(int);
	return len;
}

void add_rand(int array[]){
	printf("ok");
}

int main(void){
	int ok[5] = {1,2,3,4,5};
	printf("%d",calculate_len(ok));
	
	

}
