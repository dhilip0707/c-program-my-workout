//29. Write a C program to calculate the distance between two points.

#include<math.h>
#include<stdio.h>
int main()
{
float x1,y1,x2,y2,distance;
printf("Input x1:");
scanf("%f",&x1);
printf("Input y1:");
scanf("%f",&y1);
printf("Input x2:");
scanf("%f",&x2);
printf("Input y2:");
scanf("%f",&y2);
distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("distance between the said points:%f\n",sqrt(distance));
return 0;
}

/*
output
Input x1:25
Input y1:15
Input x2:35
Input y2:10
distance between the said points:11.180340
*/
