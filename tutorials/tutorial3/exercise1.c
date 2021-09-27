#include <stdio.h>

int main(const int argc, const char *argv[]) {
  float radius;
  const float PI = 355 / 113;  // more acurate value for pi
  printf("Enter radius : ");
  scanf("%f", &radius);
  const float diameter = radius * 2;
  const float circumference = 2 * PI * radius;
  const float area = PI * radius * radius;
  printf("Diametere : %2.f\nCircumference : %2.f\nArea : %2.f\n", diameter,
         circumference, area);
  return 0;
}