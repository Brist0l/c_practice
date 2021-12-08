#include<sys/socket.h>
#include<arpa/inet.h>
#include<stdio.h>

#define PORT 8080

int main(){
	int sock = 0,valread;
	struct sockaddr_in serv_addr;
	char *hello = "Hello";
	char buffer[1024] = {0};

	if((sock = socket(AF_INET,SOCK_STREAM,0)) < 0){
		
		printf("\n Socket Creation Error! \n");
		return -1;
	}

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(PORT);

	if(inet_pton(AF_INET,"127.0.0.1",&serv_addr.sin_addr) <= 0){
		printf("\nInvalid adress/ Address not supported \n");
		return -1;
	}

	if(connect(sock,(struct)))
}
