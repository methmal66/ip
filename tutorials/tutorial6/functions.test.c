#include "functions.h"

#include <assert.h>
#include <stdio.h>

void test_add() {
  assert(add(14, 54) == 68);
  assert(add(0, 214) == 214);
  assert(add(-43, -53) == -96);
  assert(add(0, 0) == 0);
  assert(add(1000, -200) == 800);
  puts("[PASS] adding integers");
}

void test_multiply() {
  assert(multiply(1, 1) == 1);
  assert(multiply(0, 0) == 0);
  assert(multiply(123, 0) == 0);
  assert(multiply(10, 100) == 1000);
  assert(multiply(15, 11) == 165);
  puts("[PASS] multipling integers");
}

void test_square() {
  assert(square(0) == 0);
  assert(square(1) == 1);
  assert(square(10) == 100);
  assert(square(-10) == 100);
  assert(square(25) == 625);
  puts("[PASS] squaring integers");
}

int main(void) {
  test_add();
  test_multiply();
  test_square();
  return 0;
}