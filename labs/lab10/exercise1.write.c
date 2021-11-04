#include <stdio.h>
#include <stdlib.h>

void input_numbers(int[], int);
void write_numbers_to_file(int[], int, char[]);

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    input_numbers(numbers, SIZE);
    write_numbers_to_file(numbers, SIZE, "numbers.txt");
}

void input_numbers(int nums[], int len) {
    printf("Enter %d numbers :\n", len);
    for (int i = 0; i < len; i++) {
        printf("No%d>>> ", i + 1);
        scanf("%d", &nums[i]);
    }
}

void write_numbers_to_file(int nums[], int len, char file_name[]) {
    FILE *file;
    file = fopen(file_name, "w");
    if (file == NULL) {
        printf("Cannot write to file %s", file_name);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++)
        fprintf(file, "%d\n", nums[i]);

    fclose(file);
}
