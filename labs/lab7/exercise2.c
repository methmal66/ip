#include <assert.h>
#include <math.h>
#include <stdio.h>

float calculate_overrall_marks(float, float);
void test_calculate_overrall_marks();

int main(int argc, char *argv[]) {
  test_calculate_overrall_marks();
  return 0;
}

float calculate_overrall_marks(float final, float ca) {
  const float mark1 = final * 0.6;
  const float mark2 = ca * 0.4;
  return mark1 + mark2;
}

void test_calculate_overrall_marks() {
  assert(calculate_overrall_marks(100, 100) == 100);
  assert(calculate_overrall_marks(0, 100) == 40);
  assert(calculate_overrall_marks(100, 0) == 60);
  assert(calculate_overrall_marks(0, 0) == 0);
  assert(calculate_overrall_marks(50, 50) == 50);
  assert(calculate_overrall_marks(37, 72) == 51);
  printf("[PASS] calculate the accurate overall marks\n");
}