#include <stdio.h>

typedef struct {
  int sales_person_no;
  int product_no;
  float value;
} Slip;

int main(int argc, char *argv[]) {
  const short SALES_PERSONS = 4, PRODUCTS_PER_PERSON = 5;
  Slip slips[SALES_PERSONS][PRODUCTS_PER_PERSON];

  // get data for each slip
  for (int i = 0; i < SALES_PERSONS; i++) {
    printf("======Sales person %hu======\n", i + 1);
    for (int j = 0; j < PRODUCTS_PER_PERSON; j++) {
      printf("------Product %hu------\n", j + 1);
      Slip tempory_slip;
      printf("Sales person number>> ");
      scanf("%d", &tempory_slip.sales_person_no);
      printf("Product number>> ");
      scanf("%d", &tempory_slip.product_no);
      printf("Product value>> ");
      scanf("%f", &tempory_slip.value);
      slips[i][j] = tempory_slip;
      printf("\n");
    }
    printf("\n");
  }

  // calculate total value of each slip
  float total = 0;
  for (int i = 0; i < SALES_PERSONS; i++) {
    for (int j = 0; j < PRODUCTS_PER_PERSON; j++) {
      total += slips[i][j].value;
    }
  }

  printf("Total value of all the products : %.2f\n", total);

  return 0;
}