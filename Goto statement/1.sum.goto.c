//1. Write a C program to print first 20 natural numbers and their sum using goto statement.


#include<stdio.h>
void main()
{
int a=1,Sum=0;
printf("Natural numbers are:");
Hello:
printf("%d ",a);
Sum=a+Sum;
a++;
if(a<=20){
goto Hello;
}
printf("\nSum is:%d\n",Sum);
}

/*output
Natural numbers are:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
Sum is:210
*/
