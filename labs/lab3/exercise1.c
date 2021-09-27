#include <stdio.h>

int main(const int argc, const char* argv[]) {
  double total_pay;
  printf("Enter total payment of a customer : ");
  scanf("%lf", &total_pay);
  const double discount = total_pay * (15 / 100);
  const double final_pay = total_pay - discount;
  printf("Discount : %.2f\n", discount);
  printf("Final Payment : %.2f\n", final_pay);
  return 0;
}