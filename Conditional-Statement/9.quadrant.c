//9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include<stdio.h>
int main()
{
int x,y;
printf("Enter the value :");
scanf("%d%d",&x,&y);
if(x>0&&y>0){
	printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
}
else if(x<0&&y>0){
	printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
}
else if(x<0&&y<0){
	printf("The coordinate point (%d,%d) lies in the Third quadrant.",x,y);
}
else if(x>0&&y<0){
	printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
}
else if(x==0&&y==0){
	printf("The coordinate point (%d,%d) lies in the origin.",x,y);
}
	return 0;
}

/*
output
Enter the value :7 9
The coordinate point (7,9) lies in the First quadrant.
*/
