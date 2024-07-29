//19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be 	captured from the keyboard to display the total amount to be paid to the customer.

#include<stdio.h>
int main()
{
int unit,id;
float chr,schr,amt,net;
schr=0;
printf("Enter the Customer ID :");
scanf("%d",&id);
printf("Enter customer name : james.\n");
printf("Consumed Unit :");
scanf("%d",&unit);
if(unit<=199){
	chr=1.20;
}
else if(unit>=200 && unit<400){
	chr=1.50;
}
else if(unit>=400 && unit<600){
	chr=1.80;
}
else if(unit>=600){
	chr=2.00;
}
amt=unit*chr;
if(amt>400){
	schr=amt*15/100;
          if(schr<100){
	  schr=100;
}
}
net=schr+amt;
printf("Amount Charges Rs%f,per unit :%f\n",chr,amt);
printf("Surcharges Amount :%f\n",schr);
printf("Net Amount Paid by the Customer:%f\n",net);
return 0;
}
	
