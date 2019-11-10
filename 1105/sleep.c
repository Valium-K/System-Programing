#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {
	if(argc <= 1) {
		printf("exit\n");
		perror(argv[0]);
		exit(1);
	}
	
	printf("Hello \n");
	sleep(atoi(argv[1]));
	printf("bye!\n");
	
	return 0;
}