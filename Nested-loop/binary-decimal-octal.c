
// 53.Write a C program to convert a binary number to octal.
//Without Argument Without Return
#include<stdio.h>
void binary_to_octal()
{
    int binary,decimal,octal,remainder,i=1;
    printf("Input a binary number:");
    scanf("%d",&binary);
    printf("The Binary Number:%d\n",binary);
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
    printf("The Equivalent Octal Number:%d\n",octal);
    
}
void main()
{
    binary_to_octal();
}


// Output:
// Input a binary number:1001
// The Binary Number:1001
// The Equivalent Octal Number:11