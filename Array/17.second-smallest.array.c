#include<stdio.h>
void main()
{
    int i,n;
    printf("Input the size of array :");
    scanf("%d",&n);
    printf("Input 5 elements in the array:%d",n);
    int smallest[n];
    for ( i = 0; i < n; i++)
    {
     printf("elements - %d:",i);
     scanf("%d",&smallest[i]);
    }
    int first=smallest[0];
    for ( i = 0; i < n; i++)
    {
       if(first>smallest[i])
       {
        first=smallest[i];
       }
    }
    printf("f=%d\n",first);
    int second=smallest[0];
     for (i = 0; i < n; i++)
    {
        if (second < smallest[i])
        {
            second = smallest[i];
        }
    }
    printf("s=%d\n",second);
    for ( i = 0; i < n; i++)
    {
        if (second>smallest[i]&&smallest[i]>first)
        {
            second=smallest[i];
        }
        printf("\nse=%d " ,smallest[i]);
    }
    
    printf("\nThe Second smallest element in the array is :%d\n",second);

    
}