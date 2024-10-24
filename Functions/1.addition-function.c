// 1. Write a program in C to show the simple structure of a function.

#include<stdio.h>
void add(int,int,int);
void main()
{
    int num1,num2,sum=0;
    printf("Input the first number : ");
    scanf("%d",&num1);
    printf("Input the second number : ");
    scanf("%d",&num2);
    add (num1,num2,sum);
}
void add(int num1,int num2,int sum)
{
    sum=num1+num2;
    printf("The total is : %d\n",sum);
}

// Output:
// Input the first number : 5
// Input the second number : 6
// The total is : 11