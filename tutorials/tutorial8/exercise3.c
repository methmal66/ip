#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  const short SIZE = 4;

  // populate array motion with user inputs
  int motion[SIZE];
  printf("Enter %hu numbers : ", SIZE);
  scanf("%d %d %d %d", &motion[0], &motion[1], &motion[2], &motion[3]);
  //   for (int i = 0; i < SIZE; i++) {
  //     scanf("%d", &motion[i]);
  //   }

  // create a new reversed array outof motion
  int reversed_motion[SIZE];
  for (int i = 0; i < SIZE; i++) {
    const int reversed_i = fabs(SIZE - i - 1);
    reversed_motion[reversed_i] = motion[i];
  }

  return 0;
}