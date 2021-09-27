#include <stdio.h>
#include <stdlib.h>

struct {
  char type;
  float radius;
  float width;
  float length;
  float height;
  float base;
} typedef Shape;

float rectangle_area(Shape s) {
  printf("Rectangle width : ");
  scanf("%f", &s.width);
  printf("Rectangle length : ");
  scanf("%f", &s.length);
  return s.width * s.length;
}

float triangle_area(Shape s) {
  printf("Triangle height : ");
  scanf("%f", &s.height);
  printf("Triangle base : ");
  scanf("%f", &s.base);
  return s.height * s.base * 0.5;
}

float cirle_area(Shape s) {
  printf("Circle radius : ");
  scanf("%f", &s.radius);
  const float PI = 355 / 113.0;
  return PI * s.radius * s.radius;
}

float calculate_area(Shape s) {
  if (s.type == 'r' || s.type == 'R') return rectangle_area(s);
  if (s.type == 't' || s.type == 'T') return triangle_area(s);
  if (s.type == 'c' || s.type == 'C') return cirle_area(s);
  puts("%c does not match to from 'r', 't' or 'c'");
  exit(-1);
}

int main(int argc, char *argv[]) {
  Shape shape;
  const char YELLOW[] = "\e[0;33m";
  printf("Type of the shape (r)ectangle/(t)riangle/(c)ircle : ");
  shape.type = getchar();
  const float area = calculate_area(shape);
  printf("%sArea : %f\n", YELLOW, area);
  getchar();
  getchar();
  return 0;
}