#include <stdio.h>
void main()
{
  int i = 1, j = 1, k = 4;
  for (int i = 1; i <= 4; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", i);
    }

    printf("\n");
  }
}
