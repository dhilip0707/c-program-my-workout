//12. Write a program in C to sort the elements of the array in descending order.
#include<stdio.h>
void main ()
{
    int i,j,n,swap;
    printf("Input the size of array:");
    scanf("%d",&n);
    int descending[n];
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements-%d:",i);
        scanf("%d",&descending[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (descending[i]<descending[j])
            {
                swap=descending[i];
                descending[i]=descending[j];
                descending[j]=swap;
            }
            
        }
        
    }
    printf("elements of array in sorted ascending order is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",descending[i]);
    }
    printf("\n");
    
}


/*
/*Output:
Input the size of array:3
Input 3 elements in the array:
elements-0:1
elements-1:2
elements-2:3
elements of array in sorted ascending order is :
3 2 1

*/