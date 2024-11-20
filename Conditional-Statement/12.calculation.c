//12.Write a C program to read the roll no, marks of three subjects and calculate the total, percentage and division.

#include<stdio.h>
int main()
{
int roll,phy,che,ca,total;
float per;
printf("Input the Roll Number of the student :");
scanf("%d",&roll);
printf("Input the marks Physics :");
scanf("%d",&phy);
printf("Chemistry :");
scanf("%d",&che);
printf("Computer Application :");
scanf("%d",&ca);
total=phy+che+ca;
per=(float)total/3.0;
printf("Roll No :%d\n",roll);
printf("Marks in Physics:%d\n",phy);
printf("Marks in Chemistry:%d\n",che);
printf("Marks in Computer Application:%d\n",ca);
printf("Total Marks:%d\n",total);
printf("Total Percentage:%f\n",per);
if(per>=70){
	printf("Division=First\n");
}
else if(per<=69 && per>=50){
	printf("Division=Second\n");
}
else if(per<=49){
	printf("Division=Third\n");
}
	return 0;
}

/*
output
Input the Roll Number of the student :784
Input the marks Physics :70
Chemistry :80
Computer Application :90
Roll No :784
Marks in Physics:70
Marks in Chemistry:80
Marks in Computer Application:90
Total Marks:240
Total Percentage:80.000000
Division=Firs
*/



