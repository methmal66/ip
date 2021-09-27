#include <stdio.h>

// gaurd claws
int abstract_value(int n) {
  if (n <= 0) return -n;
  return n;
}

int main(int argc, char *argv[]) {
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  const int non_negative = abstract_value(num);
  printf("%d\n", non_negative);
  return 0;
}