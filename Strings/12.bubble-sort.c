#include <stdio.h>
#include <string.h>
void main()
{

	int i, n, swap = 1;
	printf("Enter the Input:");
	scanf("%d", &n);
	char str1[100][100];
	for (i = 0; i < n; i++)
	{
		printf("string-[%d]:", i);
		scanf("%s", str1[i]);
	}
	char temp[100];
	while (swap > 0)
	{
		swap = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (strcmp(str1[i], str1[i + 1]) > 0)
			{
				strcpy(temp, str1[i]);
                printf("%s",temp);
				strcpy(str1[i], str1[i + 1]);
				strcpy(str1[i + 1], temp);
				swap++;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s\n", str1[i]);
	}
	printf("\n");
}


// Output:
// Enter the Input:3
// string-[0]:zero
// string-[1]:one 
// string-[2]:two
// one
// two
// zero