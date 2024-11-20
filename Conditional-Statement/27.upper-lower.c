//27. Write a C program to check whether a character is uppercase or lowercase alphabet.

#include<stdio.h>
int main()
{
char alpha;
printf("Input any one character:");
scanf("%c",&alpha);
if(alpha>='A'&&alpha<='Z'){
	printf("The entered character %c is uppercase.\n",alpha);
}
else if(alpha>='a'&&alpha<='z'){
	printf("The entered character %c is lowercase.\n",alpha);
}
else{
	printf("The entered character is not alphabet.\n");
}
return 0;
}

/*
output
Input any one character:R
The entered character R is uppercase.
Input any one character:f
The entered character f is lowercase.
*/
