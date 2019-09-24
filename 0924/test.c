#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>

int main(void) {
	struct stat buf;
	
	stat("empty3.txt", &buf);
	printf("%d\n", buf.st_mode);
	
	return 0;
}