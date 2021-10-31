#include<stdio.h>
#include<string.h>

struct Player{

	char name[12];
	int score;

};

int main(){
	
	struct Player player1;
	struct Player player2;

	strcpy(player1.name,"Gautam");
	player1.score = 6;

	strcpy(player2.name,"ok");
	player2.score = 9;

	printf("%s\n%s\n",player1.name,player2.name);
	printf("%d\n%d",player1.score,player2.score);


}
