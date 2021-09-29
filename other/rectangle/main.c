#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int width;
    int height;
    printf("enter width : ");
    scanf("%d", &width);
    printf("enter height : ");
    scanf("%d", &height);
    int parimeter = 2 * (height + width);
    int area = height * width;
    printf("Perimeter : %d\n", parimeter);
    printf("Area : %d", area);
}
