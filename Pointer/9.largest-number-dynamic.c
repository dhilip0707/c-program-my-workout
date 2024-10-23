#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, input, *ptr, large = 0;
    printf("Input the number of elements:");
    scanf("%d", &input);
    ptr = (int *)malloc(input * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated\n.");
    }
    else
    {
        printf("Memory successfully allocated\n");
        for (i = 0; i < input; i++)
        {
            printf("Number %d:", i + 1);
            scanf("%d", &ptr[i]);
        }
        for (i = 0; i < input; i++)
        {
            printf("%d", ptr[i]);
        }
        large = ptr[0];
        printf("%d", large);
        for (i = 0; i < input; i++)
        {
            if (large < ptr[i])
            {
                large = ptr[i];
            }
        }
        free(ptr);
        printf("The large element is : %d", large);
    }
    return 0;
}