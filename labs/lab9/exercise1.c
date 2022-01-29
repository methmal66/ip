#include <stdio.h>

void input_interger_array(int[][100], int, int);
void display_interger_array(int[][100], int, int);

int main(int argc, char const *argv[]) {
    int numbers[100][100];
    input_interger_array(numbers, 3, 4);
    display_interger_array(numbers, 3, 4);
}

void input_interger_array(int nums[][100], int rows, int columns) {
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("Enter number>>> ");
            scanf("%d", &nums[i][j]);
        }
    }
}

void display_interger_array(int nums[][100], int rows, int columns) {
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", nums[i][j]);
        }
        printf("\n");
    }
}
