

#include<stdio.h>
int main()
{
char Grade;
printf("Input the grade :");
scanf("%c",&Grade);
switch(Grade)
{
case 'E':
printf("You have chosen:Excellent\n");
break;
case 'V':
printf("You have chosen:Very Good\n");
break;
case 'G':
printf("You have chosen:Good\n");
break;
case 'A':
printf("You have chosen:Average\n");
break;
case 'F':
printf("You have chosen:Fail\n");
break;
default:
printf("Not Valid");
}
return 0;
}

/*
output
Input the grade :A
You have chosen:Average
*/
