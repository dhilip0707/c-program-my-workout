// 20. Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
void small_large(char string[]);
void main()
{
    char string[200];
    printf("Input the string :");
    fgets(string, sizeof(string), stdin);
    small_large(string);
}
void small_large(char string[])
{
    char str[200], small[10], large[10];
    int i, k = 0, count = 0, min = 100, j, l = 0, m = 0, max = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            str[k] = string[i];
            k++;
            count++;
        }
        else
        {
            if (count > 0)
            {
                str[k] = '\0';

                if (min > count)
                {
                    min = count;
                    for (j = 0; str[j] != '\0'; j++)
                    {
                        small[l] = str[j];
                        l++;
                    }
                    small[l] = '\0';
                }
                if (max < count)
                {
                    max = count;
                    for (j = 0; str[j] != '\0'; j++)
                    {
                        large[m] = str[j];
                        m++;
                    }
                    large[m] = '\0';
                }
                count = 0;
                l = 0;
                m = 0;
                k = 0;
            }
        }
    }
    if (count > 0)
    {
        str[k] = '\0';

        if (min > count)
        {
            min = count;
            for (j = 0; str[j] != '\0'; j++)
            {
                small[l] = str[j];
                l++;
            }
            small[l] = '\0';
        }
        if (max < count)
        {
            max = count;
            for (j = 0; str[j] != '\0'; j++)
            {
                large[m] = str[j];
                m++;
            }
            large[m] = '\0';
        }
        count = 0;
        l = 0;
        m = 0;
        k = 0;
    }
    printf("The largest word is %s and the smallest word is %s", large, small);
}

// Output:
// Input the string :This is a pen
// The largest word is This and the smallest word is a
