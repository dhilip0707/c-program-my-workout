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


/*output
Input the number of terms5
1/1+1/2+1/3+1/4+1/5+
Sum of series upto 5 terms:2.283334
*/
