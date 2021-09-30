#include <stdio.h>

short input_option(char message[], short count) {
  short option;
  printf(message);
  scanf("%hu", &option);
  if (option > count || option < 1) {
    puts("Invalid option! Please try again...");
    return input_option(message, count);
  }
  return option;
}

short input_natural_number(char name[]) {
  short value;
  printf("Number of %s>>> ", name);
  scanf("%hu", &value);
  if (value < 1) {
    printf("Invalid value number of %s! Please try again...\n", name);
    return input_natural_number(name);
  }
  return value;
}

short need_additional_tour() {
  char answer;
  printf("Do you need any additional tours (y)es/(n)o>>> ");
  scanf(" %c", &answer);
  if (answer == 'y' || answer == 'Y') return 1;
  if (answer == 'n' || answer == 'N') return 0;
  puts("Invalid answer! Please try again...");
  return need_additional_tour();
}