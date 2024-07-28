//1. Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main()
{
int Number1,Number2;
printf("Enter two integers :");
scanf("%d%d",&Number1,&Number2);
if(Number1==Number2){
	printf("Number1 and Number2 are equal\n");
}
else{ 
	printf("Number1 and Number2 are not equal\n");
}
return 0;
}

/*
output
Enter two integers :15 15
Number1 and Number2 are equal
*/


