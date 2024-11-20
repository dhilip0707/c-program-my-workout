//30.  Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include<stdio.h>
int main()
{
int days,year,month,per_month=30,per_year=365;
printf("Number of days: ");
scanf("%d",&days);
year=(days/per_year);
month=(days%per_year)/per_month;
days=(days%per_year)%per_month;
printf("Years : %d\n",year);
printf("Months : %d\n",month);
printf("Days : %d\n",days);
return 0;
}

/*
output
Number of days: 2535
Years : 6
Months : 11
Days : 15
*/
 

