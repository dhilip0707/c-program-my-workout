//2. Check whether given number is even or odd until this program run to click exit, using goto statement.


#include<stdio.h>
void main()
{
int a,b;
Hi:
printf("Enter the number:");
scanf("%d",&a);
if(a%2==0){
printf("Entered number %d is even",a);
}
else{
printf("Entered number %d is odd",a);
}
printf("\nExit to click 1 or run again to click any number:");
scanf("%d",&b);
if(b==1){
printf("Program terminated successfully\n");
}
else{
     goto Hi;
    }
}

/*
output
Enter the number:21
Entered number 21 is odd
Exit to click 1 or run again to click any number:5
Enter the number:2
Entered number 2 is even
Exit to click 1 or run again to click any number:1
Program terminated successfully
*/
