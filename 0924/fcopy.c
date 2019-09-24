#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUFSIZE 512

int main(int argc, char* argv[]) {
	int fd1, fd2, n;
	char buffer[BUFSIZE];
	
	if(argc != 3) {
		fprintf(stderr, "Type like this: %s file1 file2 \n", argv[0]);
		exit(1);
	}
	if((fd1 = open(argv[1], O_RDONLY)) == -1) {
		perror(argv[1]);
		exit(2);
	}
	if((fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1) {
		perror(argv[2]);
		exit(3);
	}
	
	while((n = read(fd1, buffer, BUFSIZE)) > 0) write(fd2, buffer, n);
	
	exit(0);
}