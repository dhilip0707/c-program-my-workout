// 38. Write a C program to display the pyramid pattern using the alphabet.
#include <stdio.h>
void main()
{
    int i, j, k, input;
    printf("Input the rows:");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= input - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", 64 + j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%c", 64 + k);
        }
        printf("\n");
    }
}

/*output:
Input the rows:5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/