//21. Write a C program to read any day number in integer and display the day name in word format.

#include<stdio.h>
int main()
{
int day;
printf("Input the day :");
scanf("%d",&day);
switch(day)
{
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case 3:
printf("Wednesday\n");
break;
case 4:
printf("Thursday\n");
break;
case 5:
printf("Friday\n");
break;
case 6:
printf("Saturday\n");
break; 
case 7:
printf("Sunday\n");
break;
default:
printf("Not Valid");
}
return 0;
}

/*
output
Input the day :4
Thursday
*/

