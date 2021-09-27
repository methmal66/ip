#include <stdio.h>

int main(const int argc, const char *argv[]) {
  const float PI = 355 / 113.0;
  float radius, height;
  printf("Enter radius of the cylinder : ");
  scanf("%f", &radius);
  printf("Enter height of the cylinder : ");
  scanf("%f", &height);
  const float rectangle_area = 2 * PI * radius * height;
  const float circle_area = PI * radius * radius;
  const float total_surface_area = rectangle_area + circle_area;
  printf("Surface area of the cylinder : %.3f", total_surface_area);
  return 0;
}