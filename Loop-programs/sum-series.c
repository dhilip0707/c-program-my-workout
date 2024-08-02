#include<stdio.h>
void main()
{
    int i,n;
    float x,sum=1,j=1,k=0;
    printf("input the value of x:");
    scanf("%f",&x);
    printf("Input the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=(2*i)*(2*i-1);
        j=-j*x*x/k;
        sum=sum+j;
        printf("%d term k = %f, j = %f sum is: %f\n",i+1, k, j, sum);
        
    }
    printf("the sum is:%f",sum);
}
