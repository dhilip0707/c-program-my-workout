//16. Write a C program to check whether a character is an alphabet, digit or special character.

/*
#include<stdio.h>
int main()
{
char dh;
printf("Enter the Character:");
scanf("%c",&dh);
if((dh>='a' && dh<='z')||(dh>='A' && dh<='Z')){
	printf("This is an alphabet.\n");
}
else if(dh>='0' && dh<='9'){
	printf("This is a digit.\n");
}
else{
	printf("This is a special character.\n");
}
return 0;
}
*/

/*
output
Enter the Character:@
This is a special character.
*/

#include<stdio.h>
int main()
{
char dh;
printf("Enter the Character:");
scanf("%c",&dh);
if(dh>='a' && dh<='z'){
	printf("This is lowercase.\n");
}
else if(dh>='A' && dh<='Z'){
	printf("This is an uppercase.\n");
}
else{
	printf("other.\n");
}
return 0;
}
