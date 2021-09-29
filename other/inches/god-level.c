#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int feets;
  int inches;
} Measurement;

Measurement process(const int total) {
  const int NUM_OF_INCHES_IN_A_FEET = 12;
  const Measurement m = {total / NUM_OF_INCHES_IN_A_FEET,
                         total % NUM_OF_INCHES_IN_A_FEET};
  return m;
}

int handle_arguments(const char* argv[]) {
  if (argv[1] == NULL) {
    printf("ERROR : total number of inches not provided!");
    exit(EXIT_FAILURE);
  }
  if (atoi(argv[1]) < 0) {
    printf("ERROR : total number of inches cannot be negative!");
    exit(EXIT_FAILURE);
  }
  const int total_inches = atoi(argv[1]);
  return total_inches;
}

int main(const int argc, const char* argv[]) {
  const int total_inches = handle_arguments(argv);
  Measurement mesurement = process(total_inches);
  printf("Feets : %d\n", mesurement.feets);
  printf("Inches : %d", mesurement.inches);
  return 0;
}