#include <stdio.h>
void main()
{
  int n;
  printf("input the number of rows:");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", 1);
    }
    printf("\n");
  }
}
