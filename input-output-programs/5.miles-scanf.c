// Write a C program that converts kilometers per hour to miles per hour.

#include <stdio.h>
int main()
{
    int kilometer;
    float miles;
    printf("Input kilometers per hour : ");
    scanf("%d", &kilometer);
    miles = kilometer / 1.6;
    printf("miles per hour is : %f\n", miles);
    return 0;
}

/*
output
Input kilometers per hour : 15
miles per hour is : 9.375000
*/
