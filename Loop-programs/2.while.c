//2. Write a C program to compute the sum of the first 10 natural numbers.

#include<stdio.h>
void main()
{
int a,c=0;
printf("The first 10 natural number is:\n");
while(a<=10)
{
c=a+c;
printf("%d",a);
a++;
}
printf("\nThe Sum is :%d\n",c);
}


/*output
The first 10 natural number is:
0
1
2
3
4
5
6
7
8
9
10
The Sum is :55
*/
