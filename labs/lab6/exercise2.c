#include <stdio.h>
#include <stdlib.h>

float calculate_bonus(float);

int main(int argc, char *argv[]) {
  float basic_salary;
  printf("Basic salary>>> ");
  scanf("%f", &basic_salary);

  const float bonus = calculate_bonus(basic_salary);
  const float net_salary = basic_salary + bonus;
  printf("Net salary : %.2f\n", net_salary);

  return 0;
}

float calculate_bonus(float salary) {
  if (salary > 20000) return salary * 2;
  if (salary <= 20000) return salary / 2;
  printf("Invalid basic salary!\n");
  exit(-1);
}