#include<stdio.h>

int main(){
	int height,lenght,width,volume;
	
	printf("Enter height of box: ");
	scanf("%d",&height);

	printf("Enter lenght of box: ");
	scanf("%d",&lenght);
	
	width = 10;

	volume = height*lenght*width;

	printf("Volume = %d",volume);
}
