// 44.Write a C program to find the sum of the G.P. series.

#include <stdio.h>
void main()
{
    int i;
    float num1=3, num2, num3, num4, sum;
    printf("Input the first number of the G.P. series:");
    scanf("%f", &num1);
    printf("Input the number or terms in the G.P. series:");
    scanf("%f", &num2);
    printf("Input the common ratio of G.P. series:");
    scanf("%f", &num3);
    printf("The numbers for the G.P. series:");
    for(i = 1; i <= num2; i++)
    {
         printf("%2f ",num1);
        sum = sum + num1;
        num1 = num1* num3;
    }
    printf("\nThe Sum of the G.P. series:%f\n",sum);
}


// Output:
// Input the first number of the G.P. series:3
// Input the number or terms in the G.P. series:5
// Input the common ratio of G.P. series:2
// The numbers for the G.P. series:3.000000 6.000000 12.000000 24.000000 48.000000 
// The Sum of the G.P. series:93.000000