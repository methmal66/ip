#include <stdio.h>
#include <stdlib.h>

int read_numbers_from_file(int[], int, char[]);
void display_integer_array(int[], int);

int main(int argc, char const *argv[]) {
    const int MAX_LENGTH = 100;
    int numbers[MAX_LENGTH];
    const int count = read_numbers_from_file(numbers, MAX_LENGTH, "numbers.txt");
    display_integer_array(numbers, count);
}

int read_numbers_from_file(int nums[], int len, char file_name[]) {
    FILE *file;
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("File %s does not exist!", file_name);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fscanf(file, "%d", &nums[i]) != EOF) {
        if (i == len) {
            printf("Maximum numbers exceeded!\n");
            break;
        }
        i++;
    }

    fclose(file);
    return i;
}

void display_integer_array(int nums[], int len) {
    for (int i = 0; i < len; i++)
        printf("%d\t", nums[i]);
}
