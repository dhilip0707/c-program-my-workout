// 13. Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
void main()
{
    int vowels = 0, consonants = 0;
    int *num1 = &vowels;
    int *num2 = &consonants;
    char string[200];
    printf("Input a string : ");
    scanf("%s", string);
    char *pointer = string;
    while (*pointer != '\0')
    {
        if (*pointer == 'a' || *pointer == 'e' || *pointer == 'i' || *pointer == 'o' || *pointer == 'u' || *pointer == 'A' || *pointer == 'E' || *pointer == 'I' || *pointer == 'O' || *pointer == 'U')
        {
            (*num1)++;
        }
        else if ((*pointer >= 'a' && *pointer <= 'z') || (*pointer >= 'A' && *pointer <= 'Z'))
        {
            (*num2)++;
        }
        pointer++;
    }
    printf("Number of vowels : %d\n", *num1);
    printf("Number of consonants : %d\n", *num2);
}


// Output:
// Input a string : string
// Number of vowels : 1
// Number of consonants : 5