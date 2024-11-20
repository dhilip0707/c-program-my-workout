#include <stdio.h>
#include<string.h>
void main()
{
    char str1[200], str2[200],str3[100],str4[100] ;
    int i, j, k,n,m,flag = 0, flag1 = 0, count = 0;
    printf("Input the first string:");
    scanf("%s", str1);
    printf("Input the second string:");
    scanf("%s", str2);
   
    n=strlen(str1);
    m=strlen(str2);
    strcpy(str3,str1);
    strcpy(str4,str2);
    if (n != m)
    {
        printf("%s and %s are not an Anagram.\n", str3, str4);
    }

    else
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            for (j = i + 1; str1[j] != '\0'; j++)
            {
                if (str1[i] > str1[j])
                {
                    k = str1[i];
                    str1[i] = str1[j];
                    str1[j] = k;
                }
            }
        }
        printf("first:%s", str1);
        for (i = 0; str2[i] != '\0'; i++)
        {
            for (j = i + 1; str2[j] != '\0'; j++)
            {
                if (str2[i] > str2[j])
                {
                    k = str2[i];
                    str2[i] = str2[j];
                    str2[j] = k;
                }
            }
        }
        printf("\nsecond:%s", str2);
        for (i = 0; i < n; i++)
        {
            if (str1[i] != str2[i])
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%s and %s is an Anagram.\n", str3, str4);
        }
        else
        {
            printf("%s and %s are not an Anagram.\n", str3, str4);
        }
    }
}

// Output:
// Input the first string:spare
// Input the second string:pears
// spare and pears are Anagram.