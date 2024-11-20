//28. Write a C program to convert specified days into years, weeks and days.
		//Note: Ignore leap year.
		
#include<stdio.h>
int main()
{
int days,per_year=365,per_week=7,years,weeks;
printf("Number of days :");
scanf("%d",&days);
years=(days/per_year);
weeks=(days%per_year)/per_week;
days=(days%per_year)%per_week;
printf("Years :%d\n",years);
printf("Weeks:%d\n",weeks);
printf("Days :%d\n",days);
return 0;
}

/*
output
Number of days :1329
Years :3
Weeks:33
Days :3
*/
