#include <stdio.h>

int main(int argc, char *argv[]) {
  // input non predefined number of user inputs, assuming maximum is 1000
  short length = 0;
  short bar_chart[6];
  printf(
      "Enter values for the bar chart(enter a negative number to exit) : \n");
  while (1) {
    int value;
    printf("next value>>> ");
    scanf("%d", &value);
    if (value < 0) {
      printf("\nStoped getting user inputs\n\n");
      break;
    }
    bar_chart[length++] = value;
  }

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