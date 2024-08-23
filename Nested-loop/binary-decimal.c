// With Argument With Return
#include<stdio.h>
int binary_to_decimal(int);
void main()
{
    int decimal,binary;
    printf("Input the binary value:");
    scanf("%d",&binary);
    decimal=binary_to_decimal(binary);
    printf("%d is the decimal number",decimal);

}
    int binary_to_decimal(int binary)
    {
        int decimal,i=1,remainder;
        while (binary>0)
        {
            remainder=binary%10;
            decimal=decimal+remainder*i;
            binary=binary/10;
            i=i*2;
        }
        return decimal;
        
    }
