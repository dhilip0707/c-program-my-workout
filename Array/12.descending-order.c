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