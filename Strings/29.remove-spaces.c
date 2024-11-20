// 24. Write a program in C to check whether a letter is uppercase or not.

#include<stdio.h>
void main()
{
    char string[200],str[100];
    int i,j=0;
    printf("Input the string:");
    fgets(string,sizeof(string),stdin);
    for ( i = 0;string[i]!='\0'; i++)
    {
        if ((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')||string[i]>='0'&&string[i]<='9')
        {
            str[j]=string[i];
            j++;
        }
        else
        {
            continue;
        }
        
    }
    printf("%s\n",str);
}

// Output:
// Input the string:The Quick Brown Fox jumps over the lazy Dog
// TheQuickBrownFoxjumpsoverthelazyDog
