// 2. Write a program in C to find the square of any number using the function.

#include <stdio.h>
float square(int input);
void main()
{
    int input;
    float i;
    printf("Input the number:");
    scanf("%d", &input);
    i = square(input);
    printf("The square of %d is : %.2lf\n", input, i);
}
float square(int input)
{
    float i;
    i = (float)input * input;
    return i;
}

// Output:
// Input the number:20
// The square of 20 is : 400.00