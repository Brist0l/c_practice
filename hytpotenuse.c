#include<stdio.h>
#include<math.h>

int main(){
	
	float a;
	float b;

	printf("Enter the first side of the triangle. :");
	scanf("%f",&a);

	printf("Enter Second Side. :");
	scanf("%f",&b);
	
	float c = sqrt(pow(a,2) + pow(b,2));

	printf("The third side is %f",c);

	return 0;

}
