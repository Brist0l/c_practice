#include<stdio.h>

int main(){

	double prices[] = {5.0,2.0,12.0,2.0,21.0};

	//printf("%d bytes",sizeof(prices));

	for(int i = 0;i < sizeof(prices)/sizeof(prices[0]);i++){
		printf("$%.2lf\n",prices[i]);
	}
}
