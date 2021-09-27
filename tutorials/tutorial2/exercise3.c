#include <stdio.h>

int main(const int argc, const char *argv[]) {
  // i)Write a C program to input two marks from the keyboard and display the
  // marks
  int marks1, marks2;
  printf("Enter marks1 : ");
  scanf("%d", &marks1);
  printf("Enter marks2 : ");
  scanf("%d", &marks2);
  printf("marks1=%d marks2=%d\n", marks1, marks2);

  // ii)Modify the above program to calculate the total of the marks and display
  // the total
  const int total = marks1 + marks2;
  printf("Total \t: %d\n", total);

  // iii)Next, add a statement to calculate the average mark.
  const float average = total / 2;

  // iv)Display the average mark.
  printf("Average\t: %.2f\n", average);

  return 0;
}
