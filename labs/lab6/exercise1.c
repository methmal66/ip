#include <stdio.h>
#include <stdlib.h>

float calculate_payment(char, short);

int main(int argc, char *argv[]) {
  char item_code;
  printf("Item code>>> ");
  scanf(" %c", &item_code);

  short quantity;
  printf("Quantity>>> ");
  scanf("%hu", &quantity);

  const float total_payment = calculate_payment(item_code, quantity);
  printf("Total payment : %.2f\n", total_payment);

  return 0;
}

float calculate_payment(char code, short quantity) {
  if (code == '1') return 50.00 * quantity;
  if (code == '2') return 100.00 * quantity;
  printf("Invalid code!\n");
  exit(-1);
}