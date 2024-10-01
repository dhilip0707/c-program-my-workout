// 1. Write a program in C to input a string and print it.

#include<stdio.h>
void main()
{
    char array[200];
	printf("Input the string:");
    fgets(array,sizeof(array),stdin);
    printf("The string you entered is :%s ",array);
}

/*
Output:
Input the string : Welcome,w3resource
The string you entered is :Welcome,w3resource
*/
/*#include <stdio.h>
int main()
{
	char arr1[100], arr2[100];
	printf("Input the 1st string:");
	fgets(arr1,sizeof(arr1),stdin);
	printf("Input the 2nd string:");
	fgets(arr2,sizeof(arr2),stdin);
	printf("%s,%s", arr1, arr2);
	return 0; 
}
*/
/*
Output:
Input the 1st string:Welcome
Input the 2nd string:w3resource
Welcome
,w3resource
*/