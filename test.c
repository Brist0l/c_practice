#include<stdio.h>
#include<math.h>

int main(){
	
	int radius;
	
	const float PI = 3.14;

	printf("Enter Radius of circle");
	scanf("%d",&radius);
	
	float area = PI * pow(radius,2); 

	printf("The Area of circle is %f2",area);


	return 0;
}
