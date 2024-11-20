//17. Write a C program to check whether an alphabet is a vowel or a consonant.

#include<stdio.h>
int main()		//void main()
{
char alpha;
printf("Enter an alphabets :");
scanf("%c",&alpha);
if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U'){
	printf("The alphabet is a vowel.\n");
}
else if((alpha>='a'&&alpha<='z')||(alpha>='A'&&alpha<='Z')){
	printf("The alphabet is a consonant.\n");
}
else{
	printf("This is not alphabet.\n");
}
return 0;		//while using void main() this (return (0))is not mandatory
}



/*
output
Enter an alphabets :k
The alphabet is a consonant.
*/
