#include <stdio.h>

int main(int argc, char *argv[]) {
  const short NO_STUDENTS = 3;

  // populate marks from user inputs
  short marks[NO_STUDENTS];
  for (int i = 0; i < NO_STUDENTS; i++) {
    printf("Mark%d>>> ", i + 1);
    scanf("%hu", &marks[i]);
  }

  // filter marks between 0 and 20
  short low_marks[NO_STUDENTS];
  int k = 0;
  for (int i = 0; i < NO_STUDENTS; i++) {
    if (marks[i] <= 20 && marks[i] >= 0) {
      low_marks[k++] = marks[i];
    }
  }

  // display low marks
  for (int j = 0; j < k; j++) {
    printf("%hu\n", low_marks[j]);
  }

  return 0;
}