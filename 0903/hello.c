#include <stdio.h>

int test(int fi) {
  int temp = 0;

  if(fi >= 1) {
    tmep = fi + test(fi - 1);
    return temp;
  }
  else {
    return fi;
  }
  
}
void testRun() {
  int temp = 0;

  printf("input: "); scanf("%d", &temp);

  printf("%d", test(temp));
}
int main() {
  //testRun();

  
  return 0;
}
