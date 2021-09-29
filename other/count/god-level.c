#include <stdio.h>
#include <stdlib.h>

int handle_arguments(const char *argv[]) {
  if (argv[1] == NULL) {
    printf("Error : count stop number not given!");
    exit(EXIT_FAILURE);
  }
  const int num = atoi(argv[1]);
  if (num < 1) {
    printf("Error : enter a positive integer!");
    exit(EXIT_FAILURE);
  }
  return num;
}

void countup(const int start, const int stop) {
  if (start <= stop) {
    printf("%d\n", start);
    countup(start + 1, stop);
  }
}

int main(const int argc, const char *argv[]) {
  const int stop = handle_arguments(argv);
  countup(1, stop);
  return 0;
}