//18. Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
int main()
{
int pur,sel,an,na;
printf("Enter the value :");
scanf("%d%d",&pur,&sel);
an=sel-pur;
na=pur-sel;
if(pur<sel){
	printf("You can booked your profit amount :%d\n",an);
}
else if(pur>sel){
	printf("You can booked your loss amount :%d\n",na);
}
else if(pur==sel){
	printf("No loss and profit\n");
}
return 0;
}


/*
output
Enter the value :500 700
You can booked your profit amount :200
*/
