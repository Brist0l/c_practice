#include<stdio.h>
#include<stdlib.h>

//int total;

//int Square(int x){

//	return x*x;
//}

//int SquareOfSum(int x,int y){
//	int z = Square(x+y);
//	return z;
//}

//int main(){
//	int a = 4,b=8;
//	total = SquareOfSum(a,b);
//	printf("output = %d",total);
//}
// for dynamic memory in c :
// 	malloc 
// 	calloc
// 	vealloc
// 	free


int main(){
	int a; // goes on the stack 

	int *p;

	p = (int *)malloc(sizeof(int)); // malloc returns void pointer therefore converting it to int pointer
	*p = 10;

	//free(p);

	p=(int *)malloc(sizeof(int));
	*p = 20;
	
	//free(p);

	p = (int *)malloc(20*sizeof(int));
	printf("%d",&p);
}
