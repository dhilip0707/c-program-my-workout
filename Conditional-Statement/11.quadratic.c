//11. Write a C program to calculate the root of a quadratic equation.
#include<math.h>
#include<stdio.h>
int main()
{
int a,b,c,m,n;
float x,y;
printf("Enter the values:");
scanf("%d%d%d",&a,&b,&c);
m=b*b-4*a*c;
//printf("m=%d\n",m);
if(m==0){
x=(m/2*a);
	printf("Roots are equal:%f\n",x);
}
else if(m>0){
printf("sqrt(%d) = %f\n",m,sqrt(m));

x=((-b+sqrt(m))/(2*a));
y=((-b-sqrt(m))/(2*a));
	printf("Roots are :%f\n",x);
	printf("Roots are :%f\n",y);
}
else if(m<0){
	printf("Roots are imaginary\n");
}
	return 0;
}

/*
output
Enter the values:1   
5
7
Roots are imaginary
*/
