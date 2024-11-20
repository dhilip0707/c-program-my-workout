// Write a C program to display Pascal's triangle.

#include <stdio.h>
void main()
{
    int i, j, input, k, L, m = 1;
    printf("Enter the number:");
    scanf("%d", &input);
    for (i = 0; i < input; i++)
    {
        for (j = 0; j < input - i; j++)
        {
            printf(" ");
        }
        for (L = 0; L <= i; L++)
        {
            if (i == 0 || L == 0)
            {
                k = 1;
            }
            else
            {
                k = k * (i - L + m) / L;
            }
            printf("%d ", k);
        }
        printf("\n");
    }
}

// Output:
// Enter the number:5
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
