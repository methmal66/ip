#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = 0;
  a = 7 > 2 ? printf("6") : printf("4");
  printf("%d", a);
  return 0;
}