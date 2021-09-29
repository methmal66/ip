#include <stdio.h>
#include <stdlib.h>

int calculate_total(const char *numbers[], const int index)
{
    if (numbers[index] != NULL)
    {
        const int num = atoi(numbers[index]);
        return num + calculate_total(numbers, index + 1);
    }
    return 0;
}

float calculate_average(const int total, const int count)
{
    const float average = (float)total / count;
    return average;
}

int main(const int argc, const char *argv[])
{
    const int total = calculate_total(argv, 0);
    printf("total : %d \n", total);
    printf("average : %f \n", calculate_average(total, argc - 1));
    scanf("");
    return 0;
}
