//1.find smallest number in between two numbers.

/*#include<stdio.h>
int main()
{
int a,b;
printf("enter the number :");
scanf("%d%d",&a,&b);

if (a<b){
	printf("smallest number is:%d\n",a);
}
else if(b<a){
	printf("smallest number is:%d\n",b);
}
else{
	printf("invalid\n");
}
return 0;
}*/


//2.find maximum number in between three number:

/*#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c){
	printf("a is the biggest number :%d\n",a);
}
else if(b>a&&b>c){
	printf("b is the biggest number:%d\n",b);
}
else if(c>a&&c>b){
	printf("c is the biggest number:%d\n",c);
}
else{
	printf("invalid\n");
}
	return 0;
}
*/

//3.find positive or negtaive:
/*#include<stdio.h>
int main()
{
int x;
printf("enter number :");
scanf("%d",&x);
if(x>0){
	printf("is positive number\n");
}
else if (x<0){
	printf("is negative number\n");
}
else if(x==0){
	printf("is equal to zero\n");
}
else{
	printf("invalid\n");
}
	return 0;
}*/

//4.divisible by 5 and or not
/*#include<stdio.h>
int main()
{
int a;
printf("input number :");
scanf("%d",&a);
if(a%5==0&&a%10==0){
	printf("divisible by 5and10\n");
}
else{
	printf("not");
}
	return 0;
}
*/

//5.Write a C program to check whether a number is even or odd.
/*#include<stdio.h>
int main()
{
int a;
printf("enter the number:");
scanf("%d",&a);
if(a%2==0){
	printf("is even number\n");
}
else{
	printf("is odd number\n");
}
	return 0;
}
*/

//6.Write a C program to check whether a year is leap year or not.
/*#include<stdio.h>
int main()
{
int a;
printf("Enter the year :");
scanf("%d",&a);
if(a%400==0){
	printf("this year is leap year\n");
}
else if(a%100==0){
	printf("this year is  leap year\n");
}
else if(a%4==0){
	printf("this year is  leap year\n");
}
else{
	printf("is not a leap year\n");
}
	return 0;
}
*/
	
//7.Write a C program to check whether a character is alphabet or not.
/*#include<stdio.h>
int main()
{
char ch;
printf("Enter the character :");
scanf("%c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
	printf("is a alphabet\n");
}
else{
	printf("is not alphabet character\n");
}
	return 0;
}
*/

//8.Write a C program to input any alphabet and check whether it is vowel or consonant.

/*#include<stdio.h>
int main()
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	printf("%c is wowel\n",ch);
}
else{
	printf("%c is consonant\n",ch);
}
	return 0;
}
*/

//9.Write a C program to input any character and check whether it is alphabet, digit or special character.

/*
#include<stdio.h>
int main()
{
char ch;
printf("input a character:");
scanf("%c",&ch);
if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
	printf("%c is an alphabet\n",ch);
}
else if(ch>='0'&&ch<='9'){
	printf("%c is a digit\n",ch);
}
else{
	printf("neither alphabet or digit");
}
	return 0;
}
*/

//10.Write a C program to check whether a character is uppercase or lowercase alphabet.
/*#include<stdio.h>
int main()
{
char ch;
printf("input a character :");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z'){
	printf("%c is Uppercase\n",ch);
}
else if(ch>='a'&&ch<='z'){
	printf("%c is Lowercase\n",ch);
}
else{
	printf("%c is not alphabet\n",ch);
}
	return 0;
}
*/

//11.Write a C program to input week number and print week day.

/*#include<stdio.h>
int main()
{
int day;
printf("enter a day:");
scanf("%d",&day);
switch(day){
case 1:
	printf("Monday\n");
	break;
case 2:
	printf("Tuesday\n");
	break;
case 3:
	printf("wednesday\n");
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
	printf("invalid\n");
	break;
}
	return 0;
}
*/	

//12.Write a C program to input month number and print number of days in that month.

/*#include<stdio.h>
int main()
{
int month;
printf("enter a month:");
scanf("%d",&month);
switch(month){
case 1:
	printf("31days\n");
	break;
case 2:
	printf("29days\n");
	break;
case 3:
	printf("31days\n");
	break;
case 4:
	printf("30days\n");
	break;
case 5:
	printf("31days\n");
	break;
case 6:
	printf("30days\n");
	break;
case 7:
	printf("31days\n");
	break;
default:
	printf("invalid\n");
	break;
}
	return 0;
}
*/


//19.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:


#include<stdio.h>
int main()
{
int phy,che,math,bio,ca,per;
printf("Input marks:");
scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&ca);
per=(phy+che+math+bio+ca)/5.0;
if(per>=90){
	printf("Grade A:%d\n",per);
}
if(per>=80){
	printf("Grade B:%d\n",per);
}
if(per>=70){
	printf("Grade C:%d\n",per);
}
if(per>=60){
	printf("Grade D:%d\n",per);
}
if(per>=40){
	printf("Grade F:%d\n",per);
}
if(per<40){
	printf("Grade Fail:%d\n",per);
}
	return 0;
}


