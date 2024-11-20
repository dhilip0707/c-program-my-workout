// 19. Write a C program to swap two integers without using any extra variables, only use two variables.

#include <stdio.h>
int main()
{
    int m, n;
    printf("Input the m and n value :");
    scanf("%d%d", &m, &n);
    printf("Before Swapping:%d %d\n", m, n);
    m = m + n;
    n = m - n;
    m = m - n;
    printf("After Swapping:%d %d\n", m, n);
    return 0;
}

/*
output
Input the m and n value :76 43
Before Swapping:76 43
After Swapping:43 76
*/
