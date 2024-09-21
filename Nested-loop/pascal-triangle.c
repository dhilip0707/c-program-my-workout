// pascal's triangle
#include<stdio.h>
void main()
{
    int i,j,n,k,l,m=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for ( l = 0; l <=i; l++)
        {
            if(i==0||l==0)
            {
                k=1;
            }
            else
            {
                k=k*(i-l+m)/l;
            }
            printf("%d ",k);

        }
        printf("\n");
    }
    
}

/*
Output:
Enter the number:5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1
 */