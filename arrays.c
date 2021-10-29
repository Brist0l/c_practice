#include<stdio.h>

int main(){

	double prices[] = {5.0,10.0,12.0};
	
	prices[0] = 12.0;

	printf("$%.2lf",prices[0]);
}
