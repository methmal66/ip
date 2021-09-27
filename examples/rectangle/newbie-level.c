#include <stdio.h>
#include <stdlib.h>

int main(const int argc, char const *argv[]) {
  int width;
  int height;
  printf("Enter width : ");
  scanf("%d", &width);
  printf("Enter height : ");
  scanf("%d", &height);
  const int parimeter = 2 * (height + width);
  const int area = height * width;
  printf("Perimeter : %d\n", parimeter);
  printf("Area : %d", area);
}
