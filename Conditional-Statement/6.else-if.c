//6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

#include<stdio.h>
int main()
{
int x;
printf("Enter a x:");
scanf("%d",&x);
if(x%8!=0){
  if(x%10==0){
    if(x%50==0){
    printf("stu");
}    
else{
	printf("x is zero");
}
}    
else{
	printf("x is zeo");
}
	return 0;
}
}

/*
output
Enter the value :-5
The value of n:-1
*/
