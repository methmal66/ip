#include <stdio.h>

#include "functions.h"

int main(int argc, char *argv[]) {
  const int answer = square(add(multiply(3, 4), multiply(5, 7)));
  printf("%d\n", answer);
  return 0;
}