#include <stdio.h>

float calculate_area(float);

int main(int argc, char *argv[]) {
  float radius;
  printf("Radius>>> ");
  scanf("%f", &radius);
  printf("Area of the circle : %.2f\n", calculate_area(radius));
  return 0;
}

float calculate_area(float r) {
  const float PI = 22 / 7.0;
  return PI * r * r;
}