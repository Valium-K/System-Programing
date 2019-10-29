#include <stdio.h>
#define BUFFER 512

int main(int argc, char* argv[]) {
	int repeat = 0;
	int count = 0;
	char word[BUFFER] = {0};
	
	printf("반복횟수 입력: ");
	scanf("%d", &repeat);
	
	for(int i = 0; i < repeat; i++) {
		__fpurge(stdin);
		printf("문자와 출력 횟수 입력: ");
		scanf("%s %d", &(*word), &count);
		
		for(int i = 1; i < count; i++) {
			word[i] = word[0];
		}
		printf("\t당신은%s와 %d를 입력했습니다. \n", &(*word), count);
	}
	return 0;
}