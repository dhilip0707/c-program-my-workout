// 37. Write a C program to multiply two positive numbers as strings. Return a string representation of the product.

#include <stdio.h>
void main()
{
    char string[200], str[200], str2[100], str3[100];
    int i, j, k = 0, l = 0, sum = 0, n = 0, count = 0;
    printf("Input the first string:");
    scanf("%s", string);
    printf("Input the second string:");
    scanf("%s", str);
    for (i = 0; string[i] != '\0'; i++)
    {
        k = k * 10 + string[i] - '0';
    }
    for (j = 0; str[j] != '\0'; j++)
    {
        l = l * 10 + str[j] - '0';
    }
    if (k >= 0 && l >= 0)
    {
        sum = k * l;
        while (sum > 0)
        {
            str2[n] = sum % 10 + '0';
            n++;
            sum = sum / 10;
        }
        str2[n] = '\0';
        for (n = 0; str2[n] != '\0'; n++)
        {
            count++;
        }

        for (i = count - 1; i >= 0; i--)
        {
            str3[i] = str2[count - i - 1];
        }
        printf("%s\n", str3);
    }
    else
    {
        printf("Invalid Entry :");
    }
}

// Output:
// Input the first string:100
// Input the second string:15
// 1500