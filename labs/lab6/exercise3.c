#include <stdio.h>
#include <stdlib.h>

float calculate_circle_perimeter(float);
float calculate_circle_area(float);
float calculate_rectangle_area(float, float);

int main(int argc, char *argv[]) {
  float height;
  printf("Height of the cylinder>>> ");
  scanf("%f", &height);

  float radius;
  printf("Radius of the cylinder>>> ");
  scanf("%f", &radius);

  const float flat_surface_area = 2 * calculate_circle_area(radius);
  const float perimeter = calculate_circle_perimeter(radius);
  const float curve_surface_area = calculate_rectangle_area(perimeter, height);
  const float total_surface_area = flat_surface_area + curve_surface_area;

  printf("Total surface area of the cylinder : %.3f\n", total_surface_area);
  return 0;
}

float calculate_circle_area(float r) {
  if (r <= 0) {
    printf("Invalid radius!\n");
    exit(-1);
  }
  const float PI = 22 / 7.0;
  return PI * r * r;
}

float calculate_circle_perimeter(float r) {
  const float PI = 22 / 7.0;
  return 2 * PI * r;
}

float calculate_rectangle_area(float width, float height) {
  if (height <= 0) {
    printf("Invalid height!\n");
    exit(-1);
  }
  return width * height;
}