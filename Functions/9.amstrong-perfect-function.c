// 9. Write a program in C to check Armstrong and Perfect numbers using the function.

#include <stdio.h>
int armstrong(int input)
{
    int i, j, count = 0, digit = 0, sum = 1, total = 0;
    int temp = input;
    for (i = input; i != 0; count++)
    {
        i = i / 10;
    }
    for (i = temp; i != 0; i = i / 10)
    {
        j = i % 10;
        sum = 1;
        digit = count;
        while (digit > 0)
        {
            sum = sum * j;
            digit--;
        }
        total = total + sum;
    }
    if (total == input)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int perfect(int input)
{
    int i, sum = 0;
    for (i = 1; i < input; i++)
    {
        if (input % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == input)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int input;
    printf("Enter the Input:");
    scanf("%d", &input);
    if (armstrong(input))
    {
        printf("The %d is an Armstrong number.\n", input);
    }
    else
    {
        printf("The %d is not an Armstrong number.\n", input);
    }
    if (perfect(input))
    {
        printf("The %d is  a Perfect number.\n", input);
    }
    else
    {
        printf("The %d is not a Perfect number.\n", input);
    }
    return 0;
}

// Output:
// Enter the Input:153
// The 153 is an Armstrong number.
// The 153 is not a Perfect number.