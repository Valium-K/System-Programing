#include <stdio.h>
#include <signal.h>

struct sigaction newact;
struct sigaction oldact;

void sigint_handler(int signo);

int main() {
	printf("main() 시작!\n");
	newact.sa_handler = sigint_handler;
	sigfillset(&newact.sa_mask);
	
	
	sigaction(SIGINT, &newact, &oldact);
	
	while(1) {
		printf("Ctrl-C를 눌러 주세요!\n");
		sleep(1);
	}

	return 0;
}

void sigint_handler(int signo) {
	printf("%d 번 시그널 처리!\n", signo);
	printf("다시 누르면 종료됩니다.\n");
	
	sigaction(SIGINT, &oldact, NULL);
}