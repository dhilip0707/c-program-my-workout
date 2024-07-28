//3. Write a C program to check whether a given number is positive or negative.

#include<stdio.h>
int main()

{
int p;
printf("Enter the value:");
scanf("%d",&p);
if(p==0){
 printf("%d Neither positive or negative\n",p);
}
else if (p>0){
 printf("%d is a positive number\n",p);
}
else{
 printf("%d is a negative number\n",p);
}
return 0;
}

/*
output
Enter the value:15
15 is a positive number
*/
