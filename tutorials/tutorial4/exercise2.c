#include <stdio.h>
#include <stdlib.h>

float process_transaction(char type, float balance, float amount) {
  if (type == 'w' || type == 'W') {
    puts("You have selected to withdraw money");
    return balance - amount;
  };
  if (type == 'd' || type == 'D') {
    puts("You have selected to deposite money");
    return balance + amount;
  };
  puts("You have selected an invalid transaction type");
  exit(-1);  // using stdlib.h
}

int main(int argc, char *argv[]) {
  float current_balance, amount;
  printf("Current balance : ");
  scanf("%f", &current_balance);
  printf("Amount to withdraw or deposite : ");
  scanf("%f", &amount);
  printf("Transaction type (w)ithdrawal/(d)eposite : ");
  getchar();
  const char type = getchar();

  const float new_balance = process_transaction(type, current_balance, amount);
  printf("Your new balance : %.2f\n", new_balance);
  getchar();
  getchar();
  return 0;
}