// 13. Write a program in C to make a pyramid pattern with numbers increased by 1. 

#include <stdio.h>
void main()
{
  int i, j, n, l = 1;
  printf("Input the number of rows:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", l);
      l++;
    }
    printf("\n");
  }
}

// Output:
// Input the number of rows:4
// 1
// 2 3
// 4 5 6
// 7 8 9 10