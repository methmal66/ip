#include <stdio.h>

int main(int argc, char *argv[]) {
  const short length = 6;
  const short bar_chart[] = {10, 5, 6, 7, 8, 2};

  for (int i = 0; i < length; i++) {
    const short current_value = bar_chart[i];
    printf("%hu\t", current_value);

    for (int j = 0; j < current_value; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}