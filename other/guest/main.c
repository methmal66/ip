#include <stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void) {
  int nog, cgp;
  float dis = 0, total = 0;
  printf("Enter number guest:");
  scanf("%d", &nog);

  printf("Enter charge per guest:");
  scanf("%d", &cgp);

  dis = getDiscountPrice(nog, cgp);
  total = getAmount(nog, cgp, dis);

  printf("Discount:%.2f\n", dis);
  printf("Amount to be paid:%.2f\n", total);
}

float getDiscountPrice(int noOfGuests, float chargePerGuest) {
  float DiscountPrice = 0;
  if (noOfGuests > 200) {
    DiscountPrice =
        noOfGuests * chargePerGuest * (10 / 100.0);  // 10.0/100 = 0  10/100.0
    return DiscountPrice;
  } else {
    DiscountPrice = noOfGuests * chargePerGuest * 0.0;
    return DiscountPrice;
  }
}

float getAmount(int noOfGuests, float chargePerGuest, float discount) {
  float Amount = 0;
  Amount = noOfGuests * chargePerGuest - discount;
  return Amount;
}
