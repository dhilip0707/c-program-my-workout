//Without Argument Without Return
#include<stdio.h>
void binary_to_octal()
{
    int binary,decimal,octal,remainder,i=1;
    printf("Input the value:");
    scanf("%d",&binary);
    while (binary>0)
    {
        remainder=binary%10;
        decimal=decimal+remainder*i;
        binary=binary/10;
        i=i*2;
    }
    i=1;
    while (decimal>0)
    {
        remainder=decimal%8;
        octal=octal+remainder*i;
        decimal=decimal/8;
        i=i*10;
    }
    printf("Binary to octal number is:%d\n",octal);
    
}
void main()
{
    binary_to_octal();
}
