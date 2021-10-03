#include <assert.h>
#include <stdio.h>

short find_quality_point(float average) {
  if (average >= 90) return 4;
  if (average >= 80) return 3;
  if (average >= 70) return 2;
  if (average >= 60) return 1;
  return 0;
}

int main(int argc, char *argv[]) {
  printf("\033[0;32m [PASS] \033[0m");  // display PASS in green color
  printf("find correct quality points\n");
  assert(find_quality_point(97) == 4);
  assert(find_quality_point(90) == 4);
  assert(find_quality_point(83) == 3);
  assert(find_quality_point(80) == 3);
  assert(find_quality_point(79) == 2);
  assert(find_quality_point(70) == 2);
  assert(find_quality_point(65) == 1);
  assert(find_quality_point(60) == 1);

  return 0;
}
