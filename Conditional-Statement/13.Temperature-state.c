//13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:

#include<stdio.h>
int main()
{
int Temperature;
printf("Temperature state :");
scanf("%d",&Temperature);
if(Temperature<0){
printf("then Freezing weather.\n");
}
else if(Temperature<10){
printf("then Very Cold weather.\n");
}
else if(Temperature<20){
printf("then Cold weather.\n");
}
else if(Temperature<30){
printf("then Normal in Temp.\n");
}
else if(Temperature<40){
printf("Its Hot.\n");
}
else{
printf("then Its Very Hot.\n");
}
return 0;
}

/*
output
Temperature state :40 
then Its Very Hot.
*/


