#include <stdio.h>

void a() {
  printf("%.2f\n", 3.446); /*3.45
                            */
  printf("%.1f\n", 3.446); /*3.4
                            */
}

void b() {
  // Print the value 123.4567 with 2 digits precision.
  printf("%.2f\n", 123.4567);

  // Print the value 3.14159 with three digits to the right of the decimal
  // point.
  printf("%.3f\n", 3.14159);

  // Print the value 333.546372 in a field width of 15 characters with
  // precisions of 1,2,3,4 and 5.
  for (int precision = 1; precision <= 5; precision++) {
    printf("%15.*f\n" /* '*' means precision as a variable*/, precision, 333.546372);
  }
}

int main(const int argc, const char *argv[]) {
  a();
  b();
  return 0;
}
