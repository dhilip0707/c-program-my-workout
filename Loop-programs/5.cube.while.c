//5. Write a C program to display the cube of the number up to an integer.

#include<stdio.h>
void main()
{
int a,b,cube;
printf("Input the number of terms:\n");
scanf("%d",&b);
while(a<=b)
{
cube=a*a*a;
printf("Number is :%d and cube of the %d is:%d\n",a,a,cube);
a++;
}
}

/*output
Input the number of terms:
5
Number is :0 and cube of the 0 is:0
Number is :1 and cube of the 1 is:1
Number is :2 and cube of the 2 is:8
Number is :3 and cube of the 3 is:27
Number is :4 and cube of the 4 is:64
Number is :5 and cube of the 5 is:125

*/
