#include <stdio.h>

int main() {
  int num = 5;
  int *pi = &num;
	
  
  printf("Address of Num:%p Value:%d\n", &num, num);
  printf("Address of pi:%p Value:%p Pointer Value:%d\n", &pi, pi,*pi);

  *pi = 200;


  printf("%d\n",num);
  printf("%d\n",*pi);

  num = 10;

  printf("%d\n",num);
  printf("%d\n",*pi);





}
