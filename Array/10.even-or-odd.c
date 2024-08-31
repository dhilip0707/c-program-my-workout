//10.Write a program in C to seperate odd and even integers into seperate arrays.

#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);
    int input[n],even[n],odd[n];
    printf("Input the %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements -%d:",i);
        scanf("%d",&input[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(input[i]%2==0)
        {
            even[j]=input[i];
            j++;
        }
        else
        {
            odd[k]=input[i];
            k++;
        }
    }
    printf("even numbers:\n");
    for ( i = 0; i < j; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nodd numbers:\n");
    for ( i = 0; i < k; i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    
    
}