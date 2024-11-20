//4. Write a C program to find whether a given year is a leap year or not.

#include<stdio.h>
int main()

{
int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%400==0){
 printf("%d is a leap year\n",year);
}
else if (year%100==0){
 printf("%d is a leap year\n",year);
}
else if (year%4==0){
 printf("%d is a leap year\n",year);
}
else{
 printf("program completed");
}
return 0;
}


/*
output
Enter the year:2016
2016 is a leap year
*/
