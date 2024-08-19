//24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......].

#include<stdio.h>
void main()
{
    int i,n;
    int x,sum=0,a=1;
    printf("input the value of x:");
    scanf("%d",&x);
    printf("Input the number of %d terms:",n);
    scanf("%d",&n);
    a=x; 
    sum=x;
    printf("%d\n",a);
    for(i=1;i<n;i++)
    {
        
        a=-a*x*x;
        sum=sum+a;
        printf("%d\n",a);
        
    }
    printf("the sum is:%d",sum);
}


/*out
input the value of x:2
Input the number of 0 terms:5
2
-8
32
-128
512
the sum is:410
*/