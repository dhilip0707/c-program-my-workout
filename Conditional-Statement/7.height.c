//7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

#include<stdio.h>
int main()
{
int height;
printf("Height of the person :");
scanf("%d",&height);
if(height<150){
 printf("The person is Dwarf.\n");
}
else if(height<=151&&height<=164){
 printf("The person is Average height.\n");
}
else if(height>=165){
 printf("The person is Tall.\n");
}
 return 0;
}

/*
output
Height of the person :135
The person is Dwarf.
*/

