#include <stdio.h>

int main(int argc, char *argv[]) {
  const short rows = 4, columns = 4;
  short A[][4] = {{5, 7, 8, 9}, {9, 3, 0, 6}, {8, 1, 9, 2}, {4, 7, 2, 1}};
  short B[][4] = {{2, 2, 1, 2}, {8, 1, 3, 1}, {1, 2, 2, 4}, {3, 1, 1, 2}};

  // display output matrix without storing into another matrix
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%hu\t", A[i][j] + B[i][j]);
    }
    printf("\n");
  }

  return 0;
}
