#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 10; i < 20 /*assume that 'to 20' means excluding 20*/; i++) {
    printf("%d\n", i);
  }
  return 0;
}