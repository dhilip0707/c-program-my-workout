//25. Write a C program that displays the n terms of square natural numbers and their sum.

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Input the number of terms:");
    scanf("%d",&n);
    printf("The square natural upto %d terms are :",n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d+ ",i*i);
        sum=sum+i*i;
    }
    printf("\nThe Sum of Square Natural Number upto %d terms =%d\n",n,sum);

}

/*
output
Input the number of terms:5
The square natural upto 5 terms are :1  4  9  16  25  
The Sum of Square Natural Number upto 5 terms =55
*/