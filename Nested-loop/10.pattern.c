// 10. Write a C program to display a pattern like a right angle triangle with a number.

#include <stdio.h>
void main()
{
  int i = 1, j = 1, n;
  printf("Enter the Input :");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}


// Output:
// Enter the Input :4
// 1
// 12
// 123
// 1234
