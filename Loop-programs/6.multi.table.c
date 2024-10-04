// 6. Write a C program to display the multiplication table for a given integer. (to use for loop)

#include <stdio.h>
void main()
{
    int i = 1, input;
    printf("Input the number(Table tobe calculated):");
    scanf("%d", &input);
    while (i <= 10)
    {
        printf("%d*%d=%d\n", input, i, (input * i));
        i++;
    }
}

/*
output
Input the number(Table tobe calculated):15
15*1=15
15*2=30
15*3=45
15*4=60
15*5=75
15*6=90
15*7=105
15*8=120
15*9=135
15*10=150
*/
