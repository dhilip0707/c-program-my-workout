// Write a C program that calculates the volume of a sphere.(4/3πr3)

#include <stdio.h>
int main()
{
    float radius, volume;
    float PI = 3.14;
    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);
    volume = (radius * radius * radius) * 3.14 * 4 / 3;
    printf("The volume of sphere is : %f\n", volume);
    return 0;
}

/*
output
Input the radius of the sphere : 2.56
The volume of sphere is : 70.240608
*/
