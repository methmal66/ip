#include <stdio.h>

int main(const int argc, const char *argv[]) {
  int sinhala, english, tamil;
  printf("Enter marks for subject English : ");
  scanf("%d", &english);
  printf("Enter marks for subject Sinhala : ");
  scanf("%d", &sinhala);
  printf("Enter marks for subject Tamil : ");
  scanf("%d", &tamil);
  const int score1 = english * 60 / 100;
  const int score2 = sinhala * 70 / 100;
  const int score3 = tamil * 60 / 100;
  const int final_score = (score1 + score2 + score3) / 3;
  printf("Final score : %f", final_score);
}