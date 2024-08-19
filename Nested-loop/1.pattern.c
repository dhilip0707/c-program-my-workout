
#include <stdio.h>
void main()
{
  int r;
  printf("Input the number of rows:");
  scanf("%d", &r);
  for (int a = 1; a <= r; a++)
  {
    for (int b = 1; b <= r; b++)
    {
      printf("%d ", 1);
    }
    printf("\n");
  }
}
