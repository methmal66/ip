#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int total = 0;
  int i = 1;
  while (i < argc) {
    total += atoi(argv[i]);
    printf("%s\n", argv[i++]);
  }
  const float average = total / (float)(argc - 1);
  printf("\nTotal : %d\nAverage : %.2f\n", total, average);
}