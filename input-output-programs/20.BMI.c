// 20. Write a C program to find the BMI(Body Mass Index) is a person's weight in kilograms divided by the square of height in meters.

#include <stdio.h>
int main()
{
    float weight, height, BMI;
    printf("Input the weight in kg :");
    scanf("%f", &weight);
    printf("Input the weight in cm :");
    scanf("%f", &height);
    height = height / 100; 
    BMI = weight / (height * height);
    printf("BMI=%f\n", BMI);
    return 0;
}

/*
output
Input the weight in kg : 48 Input the weight in cm : 168.5 BMI = 16.906023
*/
