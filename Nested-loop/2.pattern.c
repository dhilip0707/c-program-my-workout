#include <stdio.h>
void main()
{
  int r;
  printf("input the row value:");
  scanf("%d", &r);
  for (int a = 1; a <= r; a++)
  {
    for (int b = 1; b <= r; b++)
    {
      printf("%d ",b);
    }
    printf("\n");
  }
}
