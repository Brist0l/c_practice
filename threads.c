#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void print_msg_funcstion(void *ptr);

int main(){
	pthread_t thread1,thread2;

	const char *msg1 = "Thread 1";
	const char *msg2 = "Thread 2";
	int iret1,iret2;

	iret1 = pthread_create(&thread1,NULL,(void *)print_msg_funcstion,(void *) msg1);
	if(iret1){
		fprintf(stderr,"Error - pthread_create() return code: %d\n",iret1);
		exit(EXIT_FAILURE);
	}

	iret2 = pthread_create(&thread2,NULL,(void *)print_msg_funcstion,(void *) msg2);
	if(iret2){
		fprintf(stderr,"Error - pthread_create() return code: %d\n",iret2);
		exit(EXIT_FAILURE);
	}

	printf("pthread_create() for thread 1 : %d\n",iret1);
	printf("pthread_create() for thread 2 : %d\n",iret2);

	pthread_join(iret1,NULL);
	pthread_join(iret2,NULL);

	exit(EXIT_SUCCESS);
}

void print_msg_funcstion(void *ptr){
	char *msg;
	msg = (char *) ptr;
	printf("%s \n",msg);
}
