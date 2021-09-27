#include <stdio.h>
#define NUM_OF_SUBJECTS 4
#define NUM_OF_STUDENTS 3

void get_marks(int *marks, int count) {
  int i = 0;
  while (i < count) {
    printf("mark%d>> ", i + 1);
    scanf("%d", &marks[i++]);
  }
}

int calculate_total(int *numbers, int length) {
  int total = 0;
  int i = -1;
  while (++i < length) {
    total += numbers[i];
  }
  return total;
}

void get_totals(int *totals, int sub_count, int stu_count) {
  int i = -1;
  while (++i < stu_count) {
    printf("==student%d==\n", i + 1);
    int marks[sub_count];
    get_marks(marks, sub_count);
    const int current_total = calculate_total(marks, sub_count);
    printf("Total : %d\n\n", current_total);
    totals[i] = current_total;
  }
}

int find_max(int *numbers, int length) {
  int max = 0;
  int i = -1;
  while (++i < length) {
    max = (numbers[i] > max) ? numbers[i] : max;
  }
  return max;
}

int main(int argc, char *argv[]) {
  int totals[NUM_OF_STUDENTS];
  get_totals(totals, NUM_OF_SUBJECTS, NUM_OF_STUDENTS);
  printf("Highest total marks : %d", find_max(totals, NUM_OF_STUDENTS));
  return 0;
}