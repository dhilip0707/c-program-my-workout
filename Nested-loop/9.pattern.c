// 9. Write a program in C to display a pattern like a right angle triangle using an asterisk. (to use for loop)

#include <stdio.h>
void main()
{
  int n;
  printf("The pattern like:");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <=i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}


// Output :
// The pattern like:4
// *
// **
// ***
// ****