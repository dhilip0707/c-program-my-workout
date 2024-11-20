//*8.Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.

#include <stdio.h>
int main()
{
    int x, y, z, sum;
    printf("Input three numbers seperated by comma : ");
    scanf("%d,%d,%d", &x, &y, &z);
    printf("The sum of three numbers :%d\n",x+y+z);
    return 0;
}

/*
output
Input three numbers seperated by comma : 5,10,15
The sum of three numbers :30
*/
