#include<stdio.h>

int times2(int *a,int len){

	for(int i =0;i<len;i++){
		printf("%d\n",a[i]*2);
	}
}

int main(){
	int ok[5] = {1,2,3,4,5};

	times2(ok,5);
}
