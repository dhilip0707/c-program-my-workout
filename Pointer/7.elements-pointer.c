// 7. Write a program in C to store n elements in an array and print the elements using a pointer.

#include <stdio.h>
void main()
{
    int i = 0, *ptr, n;
    printf("Input the number of elements to store in the array:");
    scanf("%d", &n);
    int array[n];
    printf("Input 5 number of elements in the array :\n");
    for (ptr = &i; *ptr < n; (*ptr)++)
    {
        printf("element-%d:", *ptr);
        scanf("%d",(array + *ptr));
    }
    i=0;
    printf("The elements are :\n");
    for (ptr = &i; *ptr < n; (*ptr)++)
    {
        printf("element-%d:%d\n",*ptr,*(array + *ptr));
    }
}

// Output:
// Input the number of elements to store in the array:5
// Input 5 number of elements in the array :
// element-0:5
// element-1:7
// element-2:2
// element-3:9
// element-4:8
// The elements are :
// element-0:5
// element-1:7
// element-2:2
// element-3:9
// element-4:8