#include<stdio.h>

int main(){

	char questions[][100] = {"1.Whats the best thing to do ?",
				"2.Whats my name?",
				"3.Do you like sex?"};
	char options[][100] = {"A.sex","B.nothing",
				"A.Gautam",
				"A.Yes","B.No"};

	char ans[3] = {'A','A','A'};
	int num_of_ques = sizeof(questions)/sizeof(questions[0]);

	char guess;
	int score;

	printf("Quiz/n");

	for(int i=0;i<num_of_ques;i++){
		printf("%s",questions[i]);

		for(int j=(i*4);j<(i*4)+4;j++){
			printf("%s\n",options[j]);
		}
	}



}
