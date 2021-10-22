#include<stdio.h>

int main(){

	char operator;
	double num1;
	double num2;
	double result;
	printf("Enter operator:");
	scanf("%c",&operator);

	printf("\nEnter the first num :");
	scanf(" %lf",&num1);

	
	printf("\nEnter the second num :");
	scanf(" %lf",&num2);


	switch(operator){
		case '+':
			printf("You want to add");
			result = num1 + num2 ;
			printf("Result = %lf",result);
			
			break;

		case '-':
			printf("You want to subtract");
			result = num1 - num2;
			printf("Result = %lf",result);

			break;
		case 'x':
			printf("You want to multiply");
			result = num1 * num2;
			printf("Result = %lf",result);

			break;
		case '/':
			printf("You want to divide");
			result = num1/num2;
			printf("Result = %lf",result);

			break;
	}
}
