#include<stdio.h>
void main()
{
    int binary,n,remainder,i=1;
    printf("Input a decimal number:");
    scanf("%d",&n);
    
    while(n>0)
    {
        remainder=n%2;
        binary=binary+remainder*i;
        n=n/2;
        i=i*10;
        
       

    }
     printf("Binary number equivalent to said decimal number is:%d\n",binary);
}

/*output
Input a decimal number:25
11001
*/