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
