//4. Write a C program to read 10 numbers from the keyboard and find their sum and average. 

#include<stdio.h>
void main()
{
int a,b,c=0;
float avg;
printf("Input the 10 Numbers : ");

for(a=1;a<=10;a++){
  printf("Number-%d:",a);
  scanf("%d",&b);
  c=c+b;
  avg=c/10.0;
}

printf("The sum of 10 no is:%d\n",c);
printf("The Average is %f",avg);
}

/*
output
Input the 10 Numbers : Number-1:1
Number-2:2
Number-3:3
Number-4:4
Number-5:5
Number-6:6
Number-7:7
Number-8:8
Number-9:9
Number-10:10
The sum of 10 no is:55
The Average is 5.500000
*/


