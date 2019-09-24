#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFSIZE 512

int main(int argc, char* argv[]) {
	char buffer[BUFSIZE];
	int fd;
	ssize_t nread;
	long total = 0;
	
	// 에러처리
	if((fd = open(argv[1], O_RDONLY)) == -1) perror(argv[1]);
	
	// 버퍼 사이즈만큼 읽다가 종료 - 마지막 버퍼에 채워진 만큼만 알아서 리턴해줌
	while((nread = read(fd, buffer, BUFSIZE)) > 0) total += nread;
	close(fd);
	
	printf("%s, File size: %ld bytes \n", argv[1], total);
	exit(0);
	
	return 0;
}