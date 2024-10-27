// 31.Write a program in C to display a pattern like a below.

#include <stdio.h>
void main()
{
    int i, j, input;
    printf("Input value is:");
    scanf("%d", &input);
    for (i = input; i >= 1; i--)
    {
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}


// Output:
// *********
// *******
// *****
// ***
// *
// ***
// *****
// *******
// *********
// ***********
