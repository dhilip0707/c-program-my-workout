// 3. Write a C program to display n terms of natural numbers and their sum.

#include <stdio.h>
void main()
{
   int a = 1, c = 0, n;
   printf("Input the number :");
   scanf("%d", &n);
   printf("The first %d natural number is :", n);
   do
   {
      c = a + c;
      printf("%d", a);
      a++;
   } while (a <= n);
   printf("\nThe Sum of Natural Number upto %d terms :%d\n", n, c);
}

/*
output
Input the number :7
The first 7 natural number is :1
2
3
4
5
6
7
The Sum of Natural Number upto 7 terms :28
*/
