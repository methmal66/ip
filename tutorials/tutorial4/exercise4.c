#include <stdio.h>
#include <stdlib.h>

float calculate(float a, char opr, float b) {
  switch (opr) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case 'x':
      return a * b;
    case '/':
      return a / b;
    default:
      printf("%c is not a operator from '+,-,x or /'", opr);
      exit(-1);
  }
}

int main(int argc, char* argv[]) {
  const float num1 = atof(argv[1]);
  const char operator= argv[2][0];
  const float num2 = atof(argv[3]);
  const float answer = calculate(num1, operator, num2);
  printf("%f\n", answer);
  return 0;
}