
#include <stdio.h>
void factorial()
{
    int i, j, input, sum = 0, fact = 1;
    printf("Enter the input :");
    scanf("%d", &input);
    for (i = 1; i <= input; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        printf("%d!/%d+", i, i);
        sum = sum + fact / i;
    }
    printf("\b\nThe sum of series is :%d\n", sum);
}
int main()
{
    factorial();
}

// Output:
// Enter the input :5
// 1!/1+2!/2+3!/3+4!/4+5!/5+
// The sum of series is :34