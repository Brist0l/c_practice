#include<stdio.h>

typedef char user[20];

typedef struct{
	char name[25];
	char password[12];
	int id;
}User;

int main(){

	user user1 = "Gautam";
	User user2 = {"Gautam"};
	printf("%s\n",user2.name);
}
