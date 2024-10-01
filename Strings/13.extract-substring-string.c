#include <stdio.h>
void sub_string(char string[], int position, int length);
void main()
{
    int i = 0, position, count, length;
    char string[200];
    printf("Input the string :");
    fgets(string, sizeof(string), stdin);
    printf("Input the position to start extraction :");
    scanf("%d", &position);
    printf("Input the length of substring :");
    scanf("%d", &length);
    for (i = 0; string[i] != '\0'; i++)
    {
        count++;
    }
    if ((position <= count && position + length <= count) && (position >= 0 && length >= 0))
    {
        sub_string(string, position, length);
    }
    else
    {
        printf("Invalid Entry");
    }
}
void sub_string(char string[], int position, int length)
{
    int i, flag = 0, s = 0;
    char sub[200];
    for (i = position - 1; string[i] != '\0'; i++)
    {
        flag++;
        sub[s] = string[i];
        s++;
        if (flag == length)
        {
            sub[s] = '\0';
            break;
        }
    }
    printf("The substring retrieve from the string is :%s", sub);
}
