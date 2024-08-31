#include<stdio.h>
void main ()
{
    int i,j,n,swap;
    printf("Input the size of array:");
    scanf("%d",&n);
    int ascending[n];
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("elements-%d:",i);
        scanf("%d",&ascending[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (ascending[i]>ascending[j])
            {
                swap=ascending[i];
                ascending[i]=ascending[j];
                ascending[j]=swap;
            }
            
        }
        
    }
    printf("elements of array in sorted ascending order is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ",ascending[i]);
    }
    printf("\n");
    
}