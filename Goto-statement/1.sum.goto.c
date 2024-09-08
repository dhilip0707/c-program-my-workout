//1. Write a C program to print first 20 natural numbers and their sum using goto statement.


#include<stdio.h>
void main()
{
int a=1,Sum=0,n;
printf("Enter the input:");
scanf("%d",&n);
printf("Natural numbers are:");
Hello:
printf("%d ",a);
Sum=a+Sum;
a++;
if(a<=n){
goto Hello;
}
printf("\nSum is:%d\n",Sum);
}

/*
Output:
Natural numbers are:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
Sum is:210
*/
