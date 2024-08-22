// 38. Write a C program to display the pyramid pattern using the alphabet.
#include <stdio.h>
void main()
{
    int i, j, k, n;
    printf("Input the rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
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