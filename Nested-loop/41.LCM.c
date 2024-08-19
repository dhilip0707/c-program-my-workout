#include <stdio.h>
void main()
{
    int num1, num2, i, small, lcm;
    printf("Input 1st number for LCM :");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM :");
    scanf("%d", &num2);
    if (num1 < num2)
        small = num1;
    else
        small = num2;

    for (i = small; i > 0; i += small)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            printf("The LCM of %d and %d is :%d", num1, num2, lcm);
            break;
        }
    }
}
