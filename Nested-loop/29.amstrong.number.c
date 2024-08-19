//29.

#include <stdio.h>
void main()
{
    int i, j, num3, input, sum = 1, total, count = 0, digit;
    printf("Input the number:");
    scanf("%d",&input);
    num3 = input;
    for (i = input; i != 0; count++)
    {
        i = i / 10;
    }
    for (i = input; i != 0; i = i / 10)
    {
        j = 0;
        j = i % 10;
        sum = 1;
        digit = count;

        while (digit != 0)
        {
            sum = sum * j;
        digit--;
        }
        total = total + sum;
    }
    if (total==num3)
    {
        printf("%d is an Armstrong number\n", num3);
    }
    else
    {
        printf("%d is not an Armstrong number\n", num3);
    }
}


/*output
Input the number:153
153 is an Armstrong number
*/