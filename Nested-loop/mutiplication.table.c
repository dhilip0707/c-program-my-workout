#include <stdio.h>
void main()
{
    int i, j, k, l;
    printf("Input upto the table number starting from:");
    scanf("%d", &k);
    printf("Input the row for each table:");
    scanf("%d", &l);
    for (i = 1; i <= k; i++)
    {
        printf("Table:%d\n", i);
    for (j = 1; j <= l; j++)
    {
        printf("%d*%d=%d\n", i, j, (i * j));
    }
    printf("\n");
    }
}