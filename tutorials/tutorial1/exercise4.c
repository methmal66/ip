#include <stdio.h>

void display_box() {
  printf("********\n");
  printf("*      *\n");
  printf("*      *\n");
  printf("*      *\n");
  printf("*      *\n");
  printf("********\n\n");
}

void display_oval() {
  printf("  ***\n");
  printf(" *   *\n");
  printf("*     *\n");
  printf("*     *\n");
  printf(" *   *\n");
  printf("  ***\n\n");
}

void display_triangle() {
  printf("*\n");
  printf("**\n");
  printf("***\n");
  printf("****\n");
  printf("*****\n");
  printf("******\n\n");
}

void display_arrow() {
  printf("  *\n");
  printf(" ***\n");
  printf("*****\n");
  printf("  *\n");
  printf("  *\n");
  printf("  *\n\n");
}

int main(const int argc, const char *argv[]) {
  display_box();
  display_oval();
  display_triangle();
  display_arrow();
  return 0;
}