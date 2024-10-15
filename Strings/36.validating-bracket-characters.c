// 36.A given string contains the bracket characters '(', ')', '{', '}', '<', ‘>', '[' and ']', 
// 	    Write a C program to check if the string is valid or not. The input string will be valid when open brackets and closed brackets are same type of brackets.
	

#include <stdio.h>
void main()
{
    char string[200];
    int i = 0, j = 0, k = 0, l = 0, n, m;
    printf("Input the string : ");
    scanf("%s", string);
    int array[100];
    for (n = 0; string[n] != '\0'; n++)
    {
        if (string[n] == '<')
        {
            i++;
            array[++m] = 1;
        }
        else if (string[n] == '{')
        {
            j++;
            array[++m] = 2;
        }
        else if (string[n] == '[')
        {
            k++;
            array[++m] = 3;
        }
        else if (string[n] == '(')
        {
            l++;
            array[++m] = 4;
        }
        if (string[n] == '>')
        {
            if (array[m] == 1)
            {
                i--;
                m--;
            }
            else
            {
                printf("bracket in the said string is invalid");
            }
        }
        else if (string[n] == '}')
        {
            if (array[m] == 2)
            {
                j--;
                m--;
            }
            else
            {
                printf("bracket in the said string is invalid\n");
            }
        }
        else if (string[n] == ']')
        {
            if (array[m] == 3)
            {
                k--;
                m--;
            }
            else
            {
                printf("bracket in the said string is invalid\n");
            }
        }
        else if (string[n] == ')')
        {
            if (array[m] == 4)
            {
                l--;
                m--;
            }
            else
            {
                printf("bracket in the said string is invalid\n");
            }
        }
    }
    if ((i == 0 && j == 0 && k == 0 && l == 0) && (m == 0))
    {
        printf("bracket in the said string is valid\n");
    }
}


// Output:
// Input the string : {[(<>)]}
// bracket in the said string is valid