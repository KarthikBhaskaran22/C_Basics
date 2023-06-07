#include <stdio.h>

int main()
{
	int n, i, arr[50], min, max;

	printf("Enter n: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Enter an element: ");
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	max = arr[0];

	for(i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}

		if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	printf("Max: %d\n", max);
	printf("Min: %d\n", min);

	return 0;
}
