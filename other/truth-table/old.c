#include <stdio.h>

int main() {
  for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 2; j++) {
      for (int k = 1; k <= 2; k++) {
        printf("[%d %d %d]\n", i, j, k);
      }
    }
  }
}