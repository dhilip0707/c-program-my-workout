//26. Write a program in C which is a Menu-Driven Program to perform a simple calculation.

#include<stdio.h>
int main()
{
int a,b,option;
printf("Input'1'for addition.\n");
printf("Input'2'for subtraction.\n");
printf("Input'3'for multiplication.\n");
printf("Input'4'for division.\n");
scanf("%d",&option);
switch(option)
{
case 1:
	printf("Addition.\n");
	scanf("%d%d",&a,&b);
	printf("The Addition of %d and %d is:%d\n",a,b,a+b);
	break;
case 2:
	printf("Subtraction.\n");
	scanf("%d%d",&a,&b);
	printf("The Subtraction of %d and %d is:%d\n",a,b,a-b);
	break;
case 3:
	printf("Multiplication.\n");
	scanf("%d%d",&a,&b);
	printf("The Multiplication of %d and %d is:%d\n",a,b,a*b);
	break;
case 4:
	printf("Division.\n");
	scanf("%d%d",&a,&b);
	printf("The Division of %d and %d is:%d\n",a,b,a/b);
	break;
default:
	printf("Input number invalid.\n");
}
return 0;
}

/*
output
Input'1'for addition.
Input'2'for subtraction.
Input'3'for multiplication.
Input'4'for division.
3
Multiplication.
10 2	 
The Multiplication of 10 and 2 is:20
*/

