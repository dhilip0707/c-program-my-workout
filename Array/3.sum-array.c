//3.Write a program in C to find the sum of all elements of the array.

#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);
    int array[n];
    printf("Input %d elements in the array:\n",n);
    for ( i = 0; i < n; i++)
    {
        printf("elements-%d:",i);
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("\nSum of all elements stored in the array is :%d\n",sum);

    
}

/*
Output:
Input the number of elements to be stored in the array:3
Input 3 elements in the array:
elements-0:2
elements-1:5
elements-2:8

Sum of all elements stored in the array is :15
*/