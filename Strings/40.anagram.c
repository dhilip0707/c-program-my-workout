#include <stdio.h>
void main()
{
    char str1[200], str2[200];
    int i, j, flag= 0, flag1 = 0, count = 0;
    printf("Input the first string:");
    scanf("%s", str1);
    printf("Input the second string:");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        flag++;
    }
    for (j = 0; str2[j] != '\0'; j++)
    {
        flag1++;
    }
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                count++;
                break;
            }
        }
    }
    if ((flag == count) && (flag1 == count))
    {
        printf("%s and %s are Anagram.\n",str1,str2);
    }
    else
    {
        printf("%s and %s are not an Anagram.\n",str1,str2);
    }
}

// Output:
// Input the first string:spare
// Input the second string:pears
// spare and pears are Anagram.