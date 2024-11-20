//Without Argument With Return
#include<stdio.h>
int decimal_to_octal();
void main()
{
    int octal=decimal_to_octal();
    printf("Decimal to Octal number is : %d\n",octal);
}
int decimal_to_octal()
{
    int remainder,decimal,octal,i=1;
    printf("Input the value:");
    scanf("%d",&decimal);
    while (decimal>0)
    {
        remainder=decimal%8;
        octal=octal+remainder*i;
        decimal=decimal/8;
        i=i*10;
    }
    return octal;
    
}