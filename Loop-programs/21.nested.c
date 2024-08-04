//21.Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]

#include<stdio.h>
void main()
{
    int i,j,n,sum=0,l=9;
    printf("Input the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+l;
        printf("%d ",l);
        l=l*10+9;
    }
    printf("\nThe sum of the series =%d\n",sum);
}