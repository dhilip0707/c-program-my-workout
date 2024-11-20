// Write a C program that calculates the volume of a sphere.

#include <stdio.h>
int main()
{
    int b;
    float a;
    printf("Input a temprature(centigrade) : ");
    scanf("%d", &b);
    a = b * 9 / 5 + 32;
    printf("degrees Fahrenheit :%f\n", a);
    return 0;
}

/*
output
Input a temprature(centigrade) : 45
degrees Fahrenheit :113.000000
*/
