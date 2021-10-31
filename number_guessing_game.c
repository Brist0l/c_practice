#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int randomNum() {

  srand(time(0));

  return (rand() % 9) + 1;
}

int main() {
  int user_num;
  char hint[7];

  int realnum = randomNum();
  printf("Guess The Number . U have got 3 chances\n");

  for (int i = 0; i < 3; i++){
	printf("Guess:");
    scanf("%d", &user_num);

    if (user_num == realnum) {
      printf("Congrats!");
      break;
    } else {
      if (user_num > realnum) {
        strcpy(hint, "lower");

      } // bigger
      else {
        strcpy(hint, "higher");
      }
      printf("LOL try again but with a %s number\n", hint);
      continue;
    }
  }

  return 0;
}
