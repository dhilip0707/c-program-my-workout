#include<stdio.h>
void main()
{
    int i,b=0,n,binary,remainder;
    printf("Input a decimal number:");
    scanf("%d",&n);
    printf("Binary number equivalent to said decimal number is:");
    while(n>0)
    {
        remainder=n%2;
        b=b*10+remainder;
        n=n/2;
    }
    while(b>0)
    {
     remainder=b%2;
     binary=binary*10+remainder;
     b=b/10;   /* code */
    }
    printf("%d",binary);
    
}

/*output:
Input a decimal number:25
Binary number equivalent to said decimal number is:11001
*/