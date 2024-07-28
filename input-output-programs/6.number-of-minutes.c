// 6.Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

#include <stdio.h>
int main()
{
    int hours, minutes, per_hour=60, total_minutes;
    printf("Input hours : ");
    scanf("%d", &hours);
    printf("Input minutes : ");
    scanf("%d", &minutes);
    total_minutes = hours*per_hour+minutes;
    printf("Total :%d\n", total_minutes);
    return 0;
}

/*
output
Input hours : 5
Input minutes : 37
Total :337
*/
