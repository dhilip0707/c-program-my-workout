//17. Write a C program to make such a pattern like a pyramid with a number which will repeat the number in the same row.

#include <stdio.h>
void main()
{
  int i, j, input;
  printf("Enter the input :");
  scanf("%d",&input);
  for (int i = 1; i <= input; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
}

// Output:
// Enter the input :4
// 1
// 22
// 333
// 4444