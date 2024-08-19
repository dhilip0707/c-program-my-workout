//40.Write a C program to find the LCM of any two numbers using HCF. 

#include<stdio.h>
void main()
{
    int i,num1,num2,HCF,LCM;
    printf("Input 1st number for LCM: ");
    scanf("%d",&num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d",&num2);
    for(i=1;i<=num1||i<=num2;i++)
    {
        if(num1%i==0&&num2%i==0)
        {
            HCF=i;
        }
    }
        LCM=(num1*num2)/HCF;
        printf("HCF of %d and %d is :%d\n",num1,num2,LCM);

}

