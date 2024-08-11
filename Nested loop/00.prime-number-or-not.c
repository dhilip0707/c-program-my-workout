//  Prime number or not

#include <stdio.h>
void main()
{
    int i, input, flag = 0;
    printf("Input the positive number:");
    scanf("%d", &input);
    for (i = 1; i <=input; i++)
    {
        if (input%i == 0)
        {
            flag++;
        }
        if(flag==2){
            break;
        }
    }
    if (flag == 2)

    {
        printf("%d is a prime number.", input);
    }
    else
    {
        printf("%d is not a prime number.", input);
    }
}

             