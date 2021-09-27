#include <stdio.h>

int main() {
  int num1;
  int num2;
  printf("enter first number : ");
  scanf("%d", &num1);
  printf("enter second number : ");
  scanf("%d", &num2);
  int total = num1 + num2;
  printf("total : %d\n", total);
  float average = total / 2;
  printf("average : %f", average);
  return 0;
}
