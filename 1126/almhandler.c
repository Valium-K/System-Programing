#include <stdio.h>
#include <signal.h>

void alarmHandler();

int main() {
	int i = 0;
	signal(SIGALRM, alarmHandler);
	
	alarm(5);
	
	while(1) {
		sleep(1);
		printf("%d초경과\n", ++i);
	}
	printf("실행되지 않음");
	
	return 0;
}

void alarmHandler() {
	printf("일어나세요\n");
	exit(0);
}