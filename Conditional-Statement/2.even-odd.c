//2. Write a C program to check whether a given number is even or odd.

#include<stdio.h>
int main()
{
int a;
printf("Enter the value :");
scanf("%d",&a);
if(a%2==0)
	printf("%d is an even integer\n",a);

else
	printf("%d is an odd integer\n",a);

return 0;
}

/*
output
Enter the value :15
15 is an odd integer
*/

								//(ternary operator-?:)
								
#include<stdio.h>
int main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
(a%2==0)?printf("%d is an even number\n",a):printf("%d is an odd integer\n",a); 
return 0;
}

/*
output
Enter the number15
15 is an odd integer
*/


