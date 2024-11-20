// 21. Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>
void main()
{
    int i, n = 26;
    char j;
    char *ptr = &j;
    printf("The Alphabets are :\n");
    for (i = 0; i < n; i++)
    {
        *ptr = 65 + i;
        printf("%c ", *ptr);
    }
    printf("\n");
}


// Output:
// The Alphabets are :
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z