#include <stdio.h>
void main()
{
  int k, l = 1;
  printf("input the number of rows:");
  scanf("%d", &k);
  for (int i = 1; i <= k; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", l);
      l++;
    }
    printf("\n");
  }
}
