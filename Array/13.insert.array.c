#include<stdio.h>
void main()
{
    int i,n,j,insert;
    printf("Input the size of array:");
    scanf("%d",&n);
    printf("Input %d elements in the array in ascending order:\n",n);
    int list[n+1];
    for ( i = 0; i < n; i++)
    {
      printf("elements - %d:",i);
      scanf("%d",&list[i]);
    }
    printf("Insert the value to be inserted:\n");
    scanf("%d",&insert);
    printf("the exist array lsit is:");
    for ( i = 0; i < n; i++)
    {
      printf("%d ",list[i]);
    }
    for ( i = 0; i < n; i++)
    {
     if(insert<list[i])
     {
        j=i;
        break;
     }
     else
     {
        j=i+1;
     }
    }

    for ( i =n;i>=j; i--)
    {
        list[i]=list[i-1];
        
    }
    list[j]=insert;
    printf("\n After Insert the list is :");
    for ( i = 0; i <=n; i++)
    {
       printf("%d ",list[i]);
    }
    printf("\n");
    
    
    
}

/*output:
Input the size of array:5
Input 5 elements in the array in ascending order:
elements - 0:2
elements - 1:5
elements - 2:7
elements - 3:9
elements - 4:11
Insert the value to be inserted:
8
the exist array lsit is:2 5 7 9 11 
 After Insert the list is :2 5 7 8 9 11
 */