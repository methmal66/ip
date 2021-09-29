// incompleted

#include <stdio.h>

int main() {
  int pack_no, total_distance, amount;

  while (1) {
    char value;

    printf("If you wannt to terminate the program enter n or N: ");
    scanf(" %c", &value);

    printf("Do you have more customers?");

    printf("Package no(1,2,3,4): ");
    scanf("%d", &pack_no);

    printf("Total distance: ");
    scanf("%d", &total_distance);

    if (pack_no == 1) {
      amount = (150.00) + ((total_distance - 1) * 175.00);
    } else if (pack_no == 2) {
      amount = 100.00 * total_distance;
    } else if (pack_no == 3) {
      amount = (130.00) + ((total_distance - 1) * 150.00);
    } else if (pack_no == 4) {
      amount = (120.00) + ((total_distance - 1) * 130.00);
    } else {
      printf("Invalid Package Number \n");
    }
  }
  printf("Total Amount: Rs. %d", amount);
  return 0;
}
