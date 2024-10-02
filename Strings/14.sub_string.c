// 14. Write a C program to check whether a substring is present in a string.

#include <stdio.h>
void sub_string(char str1[], char str2[]);
void main()
{
    char str1[200], str2[200], str3[200];
    printf("Input the string :");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the substring to be search :");
    fgets(str2, sizeof(str2), stdin);
    sub_string(str1, str2);
}
void sub_string(char str1[], char str2[])
{
    int i, j, m, count = 0, flag = 0;
    for (j = 0; str2[j] != '\0'; j++)
    {
        count++;
    }
    j = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            // str3[m] = str1[i];
            // m++;
            flag++;
            j++;

            if (count - 1 == flag)
            {
                break;
            }
        }
        // if (str3[m] == str1[i])
        // {
        //     continue;
        // }

        else
        {
            if (flag != 0)
            {
                i--;
            }
            j = 0;
            flag = 0;
        }
    }
    if (count - 1 == flag)
    {
        printf("The substring is in the string.");
    }
    else
    {
        printf("The substring is not exists in the string.");
    }
}

/*Output:
Input the string :this is a test string
Input the substring to be search :search
The substring is not exists in the string.
*/