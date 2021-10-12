#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  const short SIZE = 4;

  // populate array motion with user inputs
  int motion[SIZE];
  printf("Enter %hu numbers : \n", SIZE);
  for (int i = 0; i < SIZE; i++) {
    printf("number%hu>>> ", i + 1);
    scanf("%d", &motion[i]);
  }

  // create a new reversed array outof motion
  int reversed_motion[SIZE];
  for (int i = 0; i < SIZE; i++) {
    const int reversed_i = fabs(SIZE - i - 1);
    reversed_motion[reversed_i] = motion[i];
  }

  // values are not displayed. instead use the debugger to find the reversed
  // motion

  return 0;
}