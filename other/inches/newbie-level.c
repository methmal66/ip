#include <stdio.h>

int main() {
  int total;
  printf("Enter total number of inches : ");
  scanf("%d", &total);
  int feets = total / 12;
  int inches = total % 12;
  printf("Feets : %d\n", feets);
  printf("Inches : %d", inches);
  return 0;
}