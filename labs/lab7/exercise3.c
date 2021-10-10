#include <assert.h>
#include <math.h>
#include <stdio.h>

typedef struct {
  char type;
  char name[50];
  float payment;
} Package;

Package find_relevant_package(char);
float calculate_discount(float, short);
void test_calculate_discount();

int main(int argc, char *argv[]) {
  test_calculate_discount();

  char type;
  printf("\nPackage type>>> ");
  scanf(" %c", &type);

  short age;
  printf("Age>>> ");
  scanf("%hu", &age);

  const float payment = find_relevant_package(type).payment;
  const float bonus = calculate_discount(payment, age);
  const float amount = payment - bonus;
  printf("Amount to be settled : %.2f\n", amount);

  return 0;
}

Package find_relevant_package(char type) {
  if (type == 'S') return (Package){'S', "Stroke Prevention Package", 15000.0};
  if (type == 'C') return (Package){'C', "Cancer Screening Package", 50000.0};
  if (type == 'H')
    return (Package){'H', "Healthy Heart Check Package", 30000.0};
}

float calculate_discount(float payment, short age) {
  if (age >= 60) return payment * 0.1;
  return payment;
}

void test_calculate_discount() {
  assert(fabs(calculate_discount(15000.0, 40) - 15000.0) < 0.001);
  assert(fabs(calculate_discount(50000.0, 60) - 5000.0) < 0.001);
  assert(fabs(calculate_discount(30000.0, 64) - 3000.0) < 0.001);
  puts("[PASS] calculate discount");
}