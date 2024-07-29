//15. Write a C program to check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
int main()
{
int angle1,angle2,angle3,angle;
printf("Enter the value :");
scanf("%d%d%d",&angle1,&angle2,&angle3);
angle=angle1+angle2+angle3;
if(angle==180){
	printf("The triangle is valid.\n");
}
else{
	printf("The triangle is invalid.\n");
}
return 0;
}

/*
output
Enter the value :40 55 65
The triangle is invalid.
*/
