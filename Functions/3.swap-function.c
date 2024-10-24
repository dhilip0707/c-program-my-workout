// 3. Write a program in C to swap two numbers using a function.

#include <stdio.h>
void swap()
{
    int num1, num2;
    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number :");
    scanf("%d", &num2);
    printf("Before Swapping:%d,%d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After Swapping:%d,%d\n", num1, num2);
}
int main()
{
    swap(); 
}

// Output:
// Input the first number : 4
// Input the second number :5
// Before Swapping:4,5
// After Swapping:5,4
