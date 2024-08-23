/*#include<stdio.h>

//Function Declaration with parameter...
int oddoreven(int num);
void main()
{
int n,flag;
printf("Enter the number: ");
scanf("%d",&n);
//Function calling with argument...
flag=oddoreven(n);
if(flag==)
{
printf("The given number is even.\n");
}
else
{
printf("The given number is odd.\n");
}
}
*/

//Function Definition...
/*int oddoreven(int num)
{
if(num%2==0)
{
return 2;
}
else
{
return 1;
}
}
*/
//With Argument With Return
// Addition of two numbers
/*#include <stdio.h>
int square(int m);
void main()
{
int n,i;
printf("Input the numbers: ");
scanf("%d",&n);
i=square(n);
printf("The square of %d is: %d\n",n,i);
}

int square(int m)
{
int i;
i=m*m;
return i ;
}
*/

//With Argument Without Return
/*#include<stdio.h>
void square(int a);
void main()
{
int x,y;
printf("Enter the numbers: ");
scanf("%d",&x);
square(x);
}
void square(int a)
{
int sum;
sum=a*a;
printf("square of %d is: %d\n",a,sum);
}
*/

//Without Argument With Return
/*#include <stdio.h>
float square();
void main()
{
float sq=square();
printf(":%f\n",sq);
}
float square()
{
float x;
printf("Enter two numbers: ");
scanf("%f",&x);
printf("square of %f is",x);
return (x*x);
}
*/
//Without argument without return
/*#include<stdio.h>
void subtract()
{
int n,i;
printf("Enter two values: ");
scanf("%d",&n);
{
i=n*n;

}printf("Answer is: %d\n",i);

}
void main()
{
subtract();
subtract();
}*/

//with argument with return
/*#include <stdio.h>
int square(int a);
void main()
{
int y,sum;
printf("Input the numbers: ");
scanf("%d",&y);
sum=square(y);
printf("The square of %d is: %d\n",square(y),sum);
}

int square(int a)
{
int sum;
sum=a*a;
return sum;
}*/

//Without Argument Without Return
/*#include<stdio.h>
void biggest()
{
    int num1,num2,num3;
    printf("Input the values:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("%d is the biggest number",num1);
    }
    else if(num2>num3)
    {
        printf("%d is the biggest number",num2);
    }
    else
    {
        printf("%d is the biggest number",num3);
    }
}
void main()
{
    biggest();
}

*/

//With Argument With Return
/*#include<stdio.h>
int biggest();
void main()
{
    int i,num1,num2,num3;
    printf("Input the values:");
    scanf("%d %d %d",&num1,&num2,&num3);
    i=biggest(num1,num2,num3);
    printf("%d is the biggest number",i);
}
int biggest(int num1,int num2,int num3)

{
    int i;
    if(num1>num2&&num1>num3)
    {
        i=num1;
    }
    else if(num2>num3)
    {
        i=num2;
    }
    else
    {
        i=num3;
    }
    return i;
}*/

//Without Argument With Return
/*#include<stdio.h>
int biggest();
void main()
{
    int i=biggest();
    printf("%d is the biggest number",i);
}
int biggest()
{
int i,num1,num2,num3;
printf("Input the values:");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>num2&&num1>num3)
    {
        i=num1;
    }
    else if(num2>num3)
    {
        i=num2;
    }
    else
    {
        i=num3;
    }
    return i;
}
*/

//With Argument Without Return
/*#include<stdio.h>
void biggest(int num4,int num5,int num6);
void main()
{
    int num1,num2,num3;
    printf("Enter the values:");
    scanf("%d %d %d",&num1,&num2,&num3);
    biggest(num1,num2,num3);
}
void biggest(int num4,int num5,int num6)
{
    int i;
    if(num4>num5&&num4>num6)
    {
        i=num4;
    }
    else if(num5>num6)
    {
        i=num5;
    }
    else
    {
        i=num6;
    }
    printf("%d is the biggest number",i);
}
*/




