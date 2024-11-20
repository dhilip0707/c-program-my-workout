// 16. Write a program in C to compute the sum of all elements in an array using pointers.

#include<stdio.h>
void main()
{
    int i,j=0,input,*pointer2;
    printf("Input the number of elements to store in the array:");
    scanf("%d",&input);
    printf("Input %d number of elements in the array:\n",input);
    int array[input];
    int *pointer1=array;
    pointer2=&j;
    for ( i = 0; i < input; i++)
    {
        printf("element-%d : ",i);
        scanf("%d",pointer1+i);
    }
    for ( i = 0; i < input; i++)
    {
        printf("%d ",*(pointer1+i));
    }
    for ( i = 0; i < input; i++)
    {
        *pointer2=*pointer2+*(pointer1+i);
    }
    printf("The sum of array is :%d\n",*pointer2);
    
}

// Output:
// Input the number of elements to store in the array:5
// Input 5 number of elements in the array:
// element-0 : 2
// element-1 : 3
// element-2 : 4
// element-3 : 5
// element-4 : 6
// 2 3 4 5 6 The sum of array is :20