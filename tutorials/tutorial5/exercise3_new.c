#include <stdio.h>
#define NUM_OF_SUBJECTS 4
#define NUM_OF_STUDENTS 3

struct {
  short marks[NUM_OF_SUBJECTS];
  short no;
} typedef Student;

void get_marks(short *marks, short count) {
  short i = 0;
  while (i < count) {
    printf("mark%hu>> ", i + 1);
    scanf("%hu", &marks[i]);
    if (marks[i] > 100 || marks[i] < 0) {
      printf("Marks are not valid. please try again !\n");
    } else {
      i++;
    }
  }
}

short calculate_total(short *numbers, short length) {
  short total = 0, i = -1;
  while (++i < length) {
    total += numbers[i];
  }
  return total;
}

void get_students(Student *students, short sub_count, short stu_count) {
  short i = -1;
  while (++i < stu_count) {
    Student stu;
    stu.no = i + 1;
    printf("==student%hu==\n", i + 1);
    get_marks(stu.marks, sub_count);
    printf("Total : %hu\n\n", calculate_total(stu.marks, sub_count));
    students[i] = stu;
  }
}

Student find_student_with_highest_total(Student *students, int length) {
  short max = 0, i = -1;
  Student best_student;
  while (++i < length) {
    int current_total = calculate_total(students[i].marks, length);
    if (current_total > max) {
      best_student = students[i];
      max = current_total;
    }
  }
  return best_student;
}

int main(int argc, char *argv[]) {
  Student students[NUM_OF_STUDENTS];
  get_students(students, NUM_OF_SUBJECTS, NUM_OF_STUDENTS);
  short student_no =
      find_student_with_highest_total(students, NUM_OF_STUDENTS).no;
  printf("Student no %hu has the highest total marks!\n", student_no);
  return 0;
}