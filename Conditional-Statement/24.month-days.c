//24. Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
int main()
{
int month;
printf("Input the Month :");
scanf("%d",&month);
switch(month)
{
case 1:
printf("Month have 31 days\n");
break;
case 2:
printf("Month have 29 days\n");
break;
case 3:
printf("Month have 31 days\n");
break;
case 4:
printf("Month have 30 days\n");
break;
case 5:
printf("Month have 31 days\n");
break;
case 6:
printf("Month have 30 days\n");
break; 
case 7:
printf("Month have 31 days\n");
break;
case 8:
printf("Month have 31 days\n");
break;
case 9:
printf("Month have 30 days\n");
break;
case 10:
printf("Month have 31 days\n");
break;
case 11:
printf("Month have 30 days\n");
break;
case 12:
printf("Month have 31 days\n");
break;
default:
printf("Invalid Month\n");
}
return 0;
}

/*
output
Input the Month :7
Month have 31 days
*/
