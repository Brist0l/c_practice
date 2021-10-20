#include<stdio.h>

int main(){
	
	int min_age = 18;
	int user_age;

	printf("Enter Your Age.");
	scanf("%d",&user_age);

	if (user_age>=min_age){
		printf("You are allowed to vote");

	}
	else{
		printf("You are not allowed to vote");
	}

}
