//31. C program to count total number of notes in given amount.

#include<stdio.h>
int main()
{
int amt,total;
printf("Input Amount:");
scanf("%d",&amt);
total=amt/2000;
amt=amt-(total*2000);
printf("Total number of notes 2000:%d\n",total);
total=amt/500;
amt=amt-(total*500);
printf("50nbn0:%d\n",total);
total=amt/200;
amt=amt-(total*200);
printf("200:%d\n",total);
total=amt/100;
amt=amt-(total*100);
printf("100:%d\n",total);
total=amt/50;
amt=amt-(total*50);
printf("50:%d\n",total);
total=amt/20;
amt=amt-(total*20);
printf("20:%d\n",total);
total=amt/10;
amt=amt-(total*10);
printf("10:%d\n",total);
total=amt/5;
amt=amt-(total*5);
printf("5:%d\n",total);
total=amt/2;
amt=amt-(total*2);
printf("2:%d\n",total);
total=amt/1;
amt=amt-(total*1);
printf("1:%d\n",total);
return 0;
}

/*
output
Input Amount:575
Total number of notes 2000:0
Total number of notes 500:1
Total number of notes 200:0
Total number of notes 100:0
Total number of notes 50:1
Total number of notes 20:1
Total number of notes 10:0
Total number of notes 5:1
Total number of notes 2:0
Total number of notes 1:0
*/
