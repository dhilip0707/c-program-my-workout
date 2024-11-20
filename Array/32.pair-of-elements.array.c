// 32. Write a program in C to find a pair with given sum in the array.
#include <stdio.h>
void main()
{
    int i, j, sum, n;
    printf("Input the array:");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("element-[%d]:", i);
        scanf("%d", &array[i]);
    }
    printf("The given array:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nGiven sum is:");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == sum)
            {
                goto hi;
            }
        }
    }
hi:
    if (array[i] + array[j] == sum)
    {
        printf("pair of elements can make the given sum by the value of index %d and %d\n", i, j);
    }
    else
    {
        printf("no pair of elements can make the given sum\n");
    }
}

/*Output:
Input Rows and Columns of the 1st matrix :2 2
Input Rows and Columns of the 2nd matrix :2 2
Input elements in the first matrix :
element :[0],[0]:1
element :[0],[1]:2
element :[1],[0]:3
element :[1],[1]:4
Input elements in the second matrix :
element :[0],[0]:1
element :[0],[1]:2
element :[1],[0]:3
element :[1],[1]:4
The first matrix is :
1 2 
3 4 
The second matrix is :
1 2 
3 4 
The Matrices can be compared 
Two matrices are equal.
dhilipkumar@DhilipKumar:~/Documents/Github/c-program-my-workout/Array$ ^C
dhilipkumar@DhilipKumar:~/Documents/Github/c-program-my-workout/Array$ gcc -o out 32.pair-of-elements.array.c 
dhilipkumar@DhilipKumar:~/Documents/Github/c-program-my-workout/Array$ ./out
Input the array:6
element-[0]:6
element-[1]:8
element-[2]:4
element-[3]:-5
element-[4]:7
element-[5]:9
The given array:6 8 4 -5 7 9 
Given sum is:15
pair of elements can make the given sum by the value of index 0 and 5
*/