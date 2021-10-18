#include <stdio.h>

int main(){
	
	float radius;
	const float PI = 3.14;


	printf("Enter Radius for the circle:");
	scanf("%f",&radius);

	float circumfrence = 2 * PI * radius;
	
	printf("The circumfrence is %f",circumfrence);

	return 0;
}
