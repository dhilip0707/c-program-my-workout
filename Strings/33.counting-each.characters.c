// 33. Write a C program to count each character in a given string.

#include <stdio.h>
void main()
{
    char string[200];
    int i, j, count = 0, flag;
    printf("Input the string:");
    scanf("%s",string);
    for (i = 0; string[i] != '\0'; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
        {
            if (string[i] == string[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            count = 1;

            for (j = 0; j < string[j] != '\0'; j++)
            {
                if (string[i] == string[j] && i != j)
                {
                    count++;
                }
            }
            printf("%c  %d\n", string[i], count);
        }
    }
}

// Output:

// W  1
// 3  1
// r  2
// e  2
// s  1
// o  1
// u  1
// c  1


