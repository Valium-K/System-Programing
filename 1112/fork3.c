#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	int pid1, pid2;
	printf("[%d] 프로세스 시작 \n", getpid());
	pid1 = fork();
	
	if(pid1 ==0) {
		printf("[Child 1]: Hello, world pid = %d\n", getpid());
		exit(0);
	}
	pid2 = fork();
	
	if(pid2 ==0) {
		printf("[Child 2]: Hello, world pid = %d\n", getpid());
		exit(0);
	}
	
	return 0;
}