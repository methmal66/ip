#include <stdio.h>

float find_radian_value(float);
void print_radian_values();

int main(int argc, char *argv[]) {
  print_radian_values();
  return 0;
}

float find_radian_value(float degree) {
  const float PI = 22 / 7.0;
  return (PI / 180.0) * degree;
}

void print_radian_values() {
  puts("Angle in degrees\tAngle in radians");
  const float degrees[] = {100, 120, 140, 160, 180, 200};
  for (int i = 0; i < 6; i++) {
    printf("%0.f\t\t\t%.3f\n", degrees[i], find_radian_value(degrees[i]));
  }
}