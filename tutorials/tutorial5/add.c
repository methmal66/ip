#include <stdio.h>
#include <stdlib.h>

int main(int argc /*argument count*/, char *argv[] /*argument variables*/) {
  int total = 0;
  for (int i = 0; i < argc; i++) {
    total += atoi(argv[i]);
  }
  float avg = total / (float)(argc - 1);

  //   int num1 = atoi(argv[1]);
  //   int num2 = atoi(argv[2]);
  //   int total = num1 + num2;
  printf("total : %d\n", total);
  printf("average : %.3f", avg);
  return 0;
}
