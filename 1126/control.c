#include <signal.h>
#include <stdio.h>

int main() {
	int pid1, pid2;
	
	pid1 = fork();
	
	if(pid1 == 0) {
		while(1) {
			sleep(1);
			printf("프로세스 [1] 실행\n");
		}
	}

	pid2 = fork();
	
	if(pid2 == 0) {
		while(1) {
			sleep(1);
			printf("프로세스 [2] 실행\n");
		}
	}
	
	sleep(2); printf("kill(pid1, SIGSTOP)\n"); kill(pid1, SIGSTOP);
	sleep(2); printf("kill(pid1, SIGINT)\n"); kill(pid1, SIGINT);
	
	sleep(2); printf("kill(pid2, SIGSTOP)\n"); kill(pid2, SIGSTOP);
	sleep(2); printf("kill(pid1, SIGINT)\n"); kill(pid2, SIGINT);
	
	kill(pid1, SIGKILL);
	kill(pid2, SIGKILL);

	return 0;
}