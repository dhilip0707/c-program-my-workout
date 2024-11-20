// 39.Write a C program to find the HCF (Highest Common Factor) of two numbers.

#include <stdio.h>
void main()
{
    int i, num1, num2, HCF;
    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);
    for (i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF of %d and %d is :%d\n", num1, num2, HCF);
}

/*output:
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
HCF of 24 and 28 is :4
*/