#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

char find_grade(float);
void test_find_grade();

int main(int argc, char *argv[]) {
  test_find_grade();
  return 0;
}

void test_find_grade() {
  assert(find_grade(100) == 'A');
  assert(find_grade(78) == 'A');
  assert(find_grade(75) == 'A');
  assert(find_grade(70) == 'B');
  assert(find_grade(65) == 'B');
  assert(find_grade(50) == 'C');
  assert(find_grade(45) == 'C');
  assert(find_grade(40) == 'F');
  assert(find_grade(0) == 'F');
  printf("[PASS] find the grade according to the marks\n");
}

char find_grade(float mark) {
  if (mark < 0 || mark > 100) {
    printf("Invalid marks!\n");
    exit(EXIT_FAILURE);
  }
  if (mark >= 75) return 'A';
  if (mark >= 65) return 'B';
  if (mark >= 45) return 'C';
  return 'F';
}