/*
  by default your ide use the c++98 mode of gcc. but it does not support some
  newer features change settings in devc++ ide to use the latest mode of gcc
  compiler
  https://stackoverflow.com/questions/16951376/how-to-change-mode-from-c98-mode-in-dev-c-to-a-mode-that-supports-c0x-ran
*/

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
    printf("%.0f\t\t\t%.3f\n", degrees[i], find_radian_value(degrees[i]));
  }
}