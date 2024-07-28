
//5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
#include<stdio.h>
int main()
{
int e;
printf("Enter your age :");
scanf("%d",&e);
if(e<18){
	printf("Sorry you are not eligible for casting your vote\n");
}
else{ 
	printf("Congratulation! You are eligible for casting your vote.\n");
}
return 0;
}

/*
output
Enter your age :21
Congratulation! You are eligible for casting your vote.
*/
