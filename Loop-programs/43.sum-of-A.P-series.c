//43.Write a C program to find the sum of an A.P. series.

#include<stdio.h>
void main()
{
int num1,num2,num3,i,sum;
printf("Input the starting number of the A.P. series:");
scanf("%d",&num1);
printf("Input the number of items for the A.P. series:");
scanf("%d",&num2); 
printf("Input the common difference of A.P. series:");
scanf("%d",&num3);
printf("The Sum of the A.P. series are :");
for(i=num1;i<=num2*num3;i+=num3)
{
    printf("%d+",i);
    sum=sum+i;
}
printf("\b = %d\n",sum);
}

/*output
Input the starting number of the A.P. series:1
Input the number of items for the A.P. series:10
Input the common difference of A.P. series:4
The Sum of the A.P. series are :1+5+9+13+17+21+25+29+33+37=190
*/
