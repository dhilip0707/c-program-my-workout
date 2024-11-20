// 7.Write a program in C that takes minutes as input, and display the total number of hours and minutes.

/*#include <stdio.h>
int main()
{
    int minutes, per_hour = 60, hour;
    printf("Input minutes : ");
    scanf("%d", &minutes);
    hour = (minutes / per_hour);
    minutes = (minutes % per_hour);
    printf("hours : %d\n", hour);
    printf("minutes : %d\n", minutes);
    return 0;
}*/

/*
output
Input minutes : 546
hours : 9
minutes : 6
*/


#include <stdio.h>
int main()
{
    int year,month,days,per_month=30,per_year = 365;
    printf("Input days : ");
    scanf("%d",&days);
    year =(days/per_year);
    month =(days%per_year)/per_month;
    days =(days%per_year)%per_month;
    printf("total : %d\n%d\n%d\n", year,month,days);
    return 0;
}
