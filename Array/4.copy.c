//4.Write a program in C to copy the elements of one array into another array.

#include <stdio.h>
void main()
{
	int i, n;
	printf("Input the number of element to store in the array:");
	scanf("%d", &n);
	int array[n];
	int array2[n];

	printf("Input %d number of elements in the array:\n", n);
	for (i = 0; i < n; i++)
	{
		printf("element-%d : ", i);
		scanf("%d", &array[i]);
	}

	printf("The element store into the array are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	for (i = 0; i < n; i++)
	{
		array2[i] = array[i];
	}
	printf("\nThe element copied into the second array are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", array2[i]);
	}
	printf("\n");
}

// Output:
// Input the number of element to store in the array:3
// Input 3 number of elements in the array:
// element-0 : 2
// element-1 : 4
// element-2 : 8
// The element store into the array are:
// 2 4 8 
// The element copied into the second array are:
// 2 4 8
