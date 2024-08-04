//19.Write a program in c to display the n terms of harmonic series and their sum.(to use for loop)

#include<stdio.h>
void main()
{
    int i,n;
    float sum;
    printf("Input the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("1/%d+",i);
        sum=sum+1/(float)i;
    }
    printf("\nSum of series upto %d terms:%f\n",n,sum);
}