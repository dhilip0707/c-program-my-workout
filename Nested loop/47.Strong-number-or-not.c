//.Write a C program to check whether a number is a Strong Number or not.
#include<stdio.h>
void main()
{
    int i,j,factorial=1,sum=0,n;
    printf("Input a number to check whether it is Strong number:");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        factorial=1;
        for(j=1;j<=i%10;j++)
        {
            factorial=factorial*j;
        }
        sum=sum+factorial;
    }
    if(sum==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
}