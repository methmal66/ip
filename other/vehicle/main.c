#include <stdio.h>

float calculate_amount();
short has_more_customers();

int main() {
  float amount;
  while (1) {
    amount += calculate_amount();
    if (!has_more_customers()) break;
  }
  printf("Total Amount: Rs. %.2f\n", amount);
  return 0;
}

float calculate_amount() {
  int no, dist;
  printf("Package no(1,2,3,4): ");
  scanf("%d", &no);
  printf("Total distance: ");
  scanf("%d", &dist);

  if (no == 1) return (150.00) + ((dist - 1) * 175.00);
  if (no == 2) return 100.00 * dist;
  if (no == 3) return (130.00) + ((dist - 1) * 150.00);
  if (no == 4) return (120.00) + ((dist - 1) * 130.00);
  printf("Invalid Package Number \n");
  return calculate_amount();
}

short has_more_customers() {
  char value;
  printf("Do you have more customers (N)o/(Y)es: ");
  scanf(" %c", &value);
  if (value == 'n' || value == 'N') return 0;
  if (value == 'y' || value == 'Y') return 1;
  return has_more_customers();
}
