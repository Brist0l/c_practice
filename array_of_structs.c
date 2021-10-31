#include<stdio.h>

struct Studend{
	char name[12];
	float gpa;
};

int main(){

	struct Studend student1 = {"Gautam",12.0};
	struct Studend student2 = {"Ok",69.0};


	struct Studend students[] = {student1,student2};

	for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){
		printf("%s",students[i].name);
	}

}
