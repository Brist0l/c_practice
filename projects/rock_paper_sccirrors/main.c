#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char  *rand_val(){

	srand(time(0));

	char *choices[3] = {
		"Rock",
		"Paper",
		"Sccirros"
	};

	int random_value = rand()%3;

	return choices[random_value];

} 

int main(){

	char choice[10];
	char *comp_coice = rand_val();


	printf("Make Your Choice:");
	scanf("%s",&choice);
	

	if(strcmp(choice,comp_coice) == 0)
		printf("Tie");
	else printf("LOL");
	return 0;
}

