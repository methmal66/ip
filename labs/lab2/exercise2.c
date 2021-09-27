#include <stdio.h>

int main(const int argc, const char *agrv[]) {
  int num1, num2;
  printf("Input num1 : ");
  scanf("%d", &num1);
  printf("Input num2 : ");
  scanf("%d", &num2);
  const int total = num1 + num2 / 2;
  printf("Total : %d", total);
}