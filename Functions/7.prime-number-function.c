// 7. Write a program in C to check whether a number is a prime number or not using the function.

#include <stdio.h>
int prime(int);
void main()
{
    int input, flag = 0;
    printf("Input a positive number: ");
    scanf("%d", &input);
    flag = prime(input);
    if (flag == 2)
    {
        printf("%d is a prime number.\n", input);
    }
    else
    {
        printf("%d is not a prime number.\n", input);
    }
}
int prime(int input)
{
    int i, flag = 0;
    for (i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            flag++;
        }
    }
    if (flag == 2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

// Output:
// Input a positive number: 5
// 5 is a prime number.