#include <stdio.h>

int main(int argc, char *argv[]) {
  char starting = 'a';
  int count = 5;

  for (int i = starting; i < starting + count; i++) {
    for (int j = starting + count - i; j >= 1; j--) {
      printf("%c", i);
    }
    printf("\n");
  }

  return 0;
}