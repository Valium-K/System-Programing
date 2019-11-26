#include <stdio.h>

int main() {
	int i = 0;
	alarm(5);
	
	printf("무한루프\n");
	
	while(1) {
		sleep(1);
		printf("%d초경과\n", ++i);
	}
	
	printf("실행되지 않음");
	
	return 0;
}