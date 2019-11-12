#include <stdio.h>
#include <unistd.h>

int main() {
	int pid;
	printf("[%d] 프로세스 시작 \n", getpid());
	pid = fork();
	
	if(pid ==0) {
		printf("[Child]: Hello, world pid = %d\n", getpid());
	}
	else {
		printf("[Parent]: Hello, world pid = %d\n", getpid());
	}
	
	return 0;
}