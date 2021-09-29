#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const int num1 = atoi(argv[1]);
    const int num2 = atoi(argv[2]);
    const int total = num1 + num2;
    const float average = (float)total / 2;
    printf("total : %d\n", total);
    printf("average : %f", average);
    return 0;
}
