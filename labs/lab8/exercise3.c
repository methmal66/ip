#include <stdio.h>

float find_max(float[], int);
float find_min(float[], int);

int main(int argc, char *argv[]) {
  // insert data to the array
  const int max_length = 1000;
  int count = 0;
  float data[max_length];
  printf(
      "Enter the average rainfall of each month : \n(enter a negative to "
      "stop)\n");
  for (int i = 0; i < max_length; i++) {
    printf("data %d>>> ", i + 1);
    scanf("%f", &data[i]);
    if (data[i] < 0) break;
    count++;
  }
  printf("Stopped getting inputs from the user\n\n");

  const float max = find_max(data, count);
  const float min = find_min(data, count);
  printf("Max rainfall : %.3f\nMin rainfall : %.3f\n", max, min);

  return 0;
}

float find_max(float numbers[], int len) {
  float current_max = -1;  // a small possible value
  for (int i = 0; i < len - 1; i++) {
    if (numbers[i] > current_max) {
      current_max = numbers[i];
    }
  }
  return current_max;
}

float find_min(float numbers[], int len) {
  float current_min = 1000000;  // a large possible value
  for (int i = 0; i < len - 1; i++) {
    if (numbers[i] < current_min) {
      current_min = numbers[i];
    }
  }
  return current_min;
}