#include <stdio.h>

int main(const int argc, const char *argv[]) {
  const int i = 1;
  const int j = 2;
  const int k = 3;
  const int m = 2;
  printf("%d\n", i == 1);                   // 1
  printf("%d\n", j == 3);                   // 0
  printf("%d\n", i > 1 && j < 4);           // 0
  printf("%d\n", k + m < j || 3 - j >= k);  // 0
  printf("%d\n", !m);                       // 0
  printf("%d\n", !(j - m));                 // 1
  return 0;
}