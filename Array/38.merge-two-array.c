#include <stdio.h>
void main()
{
    int i, j, swap, input1, input2, add;
    printf("Enter the size of the large array:");
    scanf("%d", &input1);

    int large[input1];
    for (i = 0; i < input1; i++)
    {
        printf("element -%d:", i);
        scanf("%d", &large[i]);
    }
    printf("The given Large Array is :");
    for (i = 0; i < input1; i++)
    {

        printf("%d ", large[i]);
    }

    printf("\nEnter the size of the small array:");
    scanf("%d", &input2);
    int small[input2], merge[input1 + input2];
    for (j = 0; j < input2; j++)
    {
        printf("element -%d:", j);
        scanf("%d", &small[j]);
    }

    printf("The given Small Array is :");
    for (j = 0; j < input2; j++)
    {

        printf("%d ", small[j]);
    }
    printf("\n");
    add = input1 + input2;
    for (i = 0; i < input1; i++)
    {
        merge[i] = large[i];
    }
    for (j = 0; j < input2; j++)
    {
        merge[j + input1] = small[j];
    }
    for (i = 0; i < add; i++)
    {
        for (j = i + 1; j < add; j++)
        {
            if (merge[i] > merge[j])
            {
                swap = merge[i];
                merge[i] = merge[j];
                merge[j] = swap;
            }
        }
    }
    printf("After merged the new Array is :");
    for (i = 0; i < add; i++)
    {
        printf("%d ", merge[i]);
    }
    printf("\n");
}

/*Output:
Enter the size of the large array:4
element -0:1
element -1:3
element -2:5
element -3:7
The given Large Array is :1 3 5 7 
Enter the size of the small array:3
element -0:2
element -1:4
element -2:6
The given Small Array is :2 4 6 
After merged the new Array is :1 2 3 4 5 6 7
*/