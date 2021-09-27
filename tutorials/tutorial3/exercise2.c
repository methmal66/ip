#include <stdio.h>

void decompose_into_digits(int* digits, int number, int count) {
  for (int i = 0; i < count; i++) {
    digits[i] = number % 10;
    number /= 10;
  }
}

void display_digits(int* digits, int count) {
  for (int i = 0; i < count; i++) {
    printf("digit %d : %d\n", i + 1, digits[count - 1 - i]);
  }
}

int main(const int argc, const char* argv[]) {
  int number;
  const int NO_OF_DIGITS = 5;
  int digits[5];
  printf("Enter a %d number : ", NO_OF_DIGITS);
  scanf("%d", &number);

  decompose_into_digits(digits, number, NO_OF_DIGITS);
  display_digits(digits, NO_OF_DIGITS);
  return 0;
}