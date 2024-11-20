//14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main()
{
int equ,iso,sca;
printf("Enter the value :");
scanf("%d%d%d",&equ,&iso,&sca);
if(equ==iso && equ==sca){
	printf("This is an equilateral angle.\n");
}
else if(iso==equ || equ==sca || iso==sca){
	printf("This is an isosceles angle.\n");
}
else{
	printf("This is an scalene angle.\n");
}
return 0;
}

/*
output
Enter the value :50 50 60
This is an isosceles angle.
*/
