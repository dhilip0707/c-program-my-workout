// 2. Write a program in C to find the length of a string without using library functions.

// #include <stdio.h>
// void main()
// {
//     char array[20];
//     int count = 0;
//     int i = 0;
//     printf("Input the name :");
//     fgets(array, sizeof(array), stdin);
//     printf("given array-%s",array);
//     for (i = 0; array[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("Length is-%d", count);
// }

// with argument without retun
// #include <stdio.h>
// void simple(char []);
// void main()
// {
// 	char string[200];
// 	printf("Input the name :");
//     fgets(string, sizeof(string), stdin);
// 	simple(string);
// }

// void simple(char string[])
// {
// 	int i=0,count=0;

// 	for (i = 0; string[i]!='\0'; i++)
// 	{

// 		count++;
// 	}

// 	printf("Length is-%d", count);
// }

#include <stdio.h>
int length(char string[]);
void main()
{
    int count;
    char string[50];
    printf("Input the values:");
    fgets(string, sizeof(string), stdin);
    count = length(string);
    printf("length of the string %d\n", count-1);
}
int length(char string[])
{
    int i, count = 0;
    for (i = 0; string[i] != '\0'; i++)
    {

        count++;
    }
    return count;
}

/*
Output:
Input the values:Dhilipkumar
length of the string 11
*/