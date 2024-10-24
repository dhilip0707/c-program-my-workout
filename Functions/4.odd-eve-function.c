// 4. Write a program in C to check if a given number is even or odd using the function.

#include <stdio.h>
int odd_eve(int);
void main()
{
    int input, i;
    printf("Input the number:");
    scanf("%d", &input);
    i = odd_eve(input);
    if (i == 1)
    {
        printf("The given number %d is even.\n", input);
    }
    else
    {
        printf("The given number %d is odd.\n", input);
    }
}
int odd_eve(int input)
{
    int i;
    if (input % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Output:
// Input the number:5
// The given number 5 is odd.