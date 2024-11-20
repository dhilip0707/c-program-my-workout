//22. Write a program in C to read any digit and display it in the word.

#include<stdio.h>
int main()
{
int digit;
printf("Input the digit :");
scanf("%d",&digit);
switch(digit)
{
case 1:
printf("One\n");
break;
case 2:
printf("Two\n");
break;
case 3:
printf("Three\n");
break;
case 4:
printf("Four\n");
break;
case 5:
printf("Five\n");
break;
case 6:
printf("Six\n");
break; 
case 7:
printf("Seven\n");
break;
case 8:
printf("Eight\n");
break;
case 9:
printf("Nine\n");
break;
default:
printf("Not Valid");
}
return 0;
}

/*
output
Input the digit :4
Four
*/
