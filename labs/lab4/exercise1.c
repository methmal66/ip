#include <stdio.h>
#include <stdlib.h>

// angles of the triangle are interchangeable
// therefore parsing commandline arguments is the best practise.
int main(int argc, char *argv[]) {
  const int A = atoi(argv[1]);
  const int B = atoi(argv[2]);
  const int C = atoi(argv[3]);
  if (A + B + C == 180)
    puts("Possible to form a triangle");
  else
    puts("Impossible to form a triangle");
  return 0;
}