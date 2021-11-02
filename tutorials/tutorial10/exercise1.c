#include <stdio.h>
#include <stdlib.h>

int get_numbers_from_file(int[], char[]);
int input_unique_number(int[], int);
void append_number_to_file(int, char[]);
void display_int_array(int[], int);

int main(int argc, char const *argv[]) {
    int numbers[1000];
    int count = get_numbers_from_file(numbers, "number.dat");
    const int num = input_unique_number(numbers, count);
    append_number_to_file(num, "number.dat");
    display_int_array(numbers, count);

    return 0;
}

int get_numbers_from_file(int nums[], char file_name[]) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("File %s not found!\n", file_name);
        exit(EXIT_FAILURE);
    }

    int count = 0;
    while (fscanf(file, "%d", &nums[count]) != EOF)
        count++;
    return count;
}

int input_unique_number(int nums[], int count) {
    int num;
    printf("Enter num>>> ");
    scanf("%d", &num);
    for (int i = 0; i < count; i++) {
        if (nums[i] == num) {
            printf("Number is already stored in the file! Try again\n");
            return input_unique_number(nums, count);
        }
    }
    return num;
}

void append_number_to_file(int num, char file_name[]) {
    FILE *file = fopen(file_name, "a");
    if (file == NULL) {
        printf("File %s not found!\n", file_name);
        exit(EXIT_FAILURE);
    }

    fprintf(file, "\n%d", num);
    fclose(file);
}

void display_int_array(int nums[], int len) {
    for (int i = 0; i < len; i++)
        printf("%d\t", nums[i]);
}