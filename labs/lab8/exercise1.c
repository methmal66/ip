#include <stdio.h>

int main(int argc, char *argv[]) {
  const int length = 5;
  int numbers[length];
  for (int i = 0; i < length; i++) {
    printf("number%d>>> ", i + 1);
    scanf("%d", &numbers[i]);
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", numbers[i]);
  }
  return 0;
}