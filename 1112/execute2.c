#include <stdio.h>

int main() {
	printf("부모 프로세스 시작 \n");
	
	if(fork() == 0) {
		execl("/bin/echo", "echo", "hello", NULL);
		fprintf(stderr, "첫 번재 실패");
		exit(1);
	}
	if(fork() == 0) {
		execl("/bin/date", "date", NULL);
		fprintf(stderr, "두 번재 실패");
		exit(2);
	}
	if(fork() == 0) {
		execl("/bin/ls", "-l", NULL);
		fprintf(stderr, "세 번재 실패");
		exit(3);
	}
	printf("부모 프로세스 끝\n");
	
	return 0;
}