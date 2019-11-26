#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void intHandler();

int main() {
	int i = 0;
	signal(SIGINT, intHandler);
	
	alarm(5);
	printf("ctrl + c\n");
	while(1) pause();

	printf("실행되지 않음");
	
	return 0;
}

void intHandler(int signo) {
	printf("인터럽트 시그널 처리\n");
	printf("시그널 번호: %d\n", signo);
	exit(0);
}