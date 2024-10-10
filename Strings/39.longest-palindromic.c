#include <stdio.h>
void main()
{
    char str[200], str2[200];
    int i, j, k, l = 0, m = 0, n = 0, count = 0, flag = 0;
    printf("Input the string:");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    for (i = count; i > 0; i--)
    {
        l = count - i;
        for (j = 0; j <= l; j++)
        {
            m = j;
            for (k = count; k >=j; k--)
            {
                if (str[m] == str[k])
                {
                    str2[n] = str[m];
                    m++;
                    n++;
                    flag++;
                }
                else
                {
                    n = 0;
                    m = j;
                    flag = 0;
                }
                str2[n]='\0';
                if (flag == i)
                {
                    break;
                }
            }
            if (flag == i)
            {
                break;
            }
        }
        if (flag == i)
        {
            break;
        }
    }
    printf("%s\n", str2);
}