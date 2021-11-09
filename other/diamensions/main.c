#include <stdio.h>

int main(void)
{
    int myArr1D[12];
    int myArr2D[4][3];

    int i;
    for (i = 0; i < 12; i++)
        scanf("%d", &myArr1D[i]);

    for (i = 0; i < 12; i++)
        myArr2D[i / 3][i % 3] = myArr1D[i];
    //set a breakpoint at this line to see the values inside the 2D array
}
