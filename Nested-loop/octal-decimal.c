#include<stdio.h>
void octal_to_decimal(int);
void main()
{
    int octal;
    printf("Input the value:");
    scanf("%d",&octal);
    octal_to_decimal(octal);
}
    void octal_to_decimal(int octal)
    {
        int decimal,remainder,i=1;
        while (octal>0)
        {
            remainder=octal%10;
            decimal=decimal+remainder*i;
            octal=octal/10;
            i=i*8;
            
        }

        printf("Octal to Decimal is :%d\n",decimal);
    }