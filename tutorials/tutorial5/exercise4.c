#include <stdio.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i <= 7; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    puts("");
  }

  for (int i = 7; i >= 1; i -= 2) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    puts("");
  }

  return 0;
}
