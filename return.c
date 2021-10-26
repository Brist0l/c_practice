#include<stdio.h>

double square(double num){

	double squared_num = num * num;
	 return squared_num;

}


int main(){
	
	double x = square(21);
	printf("%lf",x);
	return 0;
}
