#include <stdio.h>

int main() {

  int rows;
  int columns;
  char symbol;
  char trash;

  printf("\n Enter # of rows:");
  scanf("%d", &rows);

  printf("Enter # of columns:");
  scanf("%d", &columns);

  scanf("%c",&trash);

  printf("Enter Symbol:");
  scanf("%c",&symbol);
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      printf("%c", symbol);
    }
    printf("\n");
  }
}
