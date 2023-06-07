#include <stdio.h>

int main()
{
	int heights[50], n, i, sum = 0;

	printf("Enter the number of students: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		printf("Elements %d: ", i);
		scanf("%d", &heights[i]);
		sum = sum + heights[i];
	}
	printf("Sum: %d\n", sum);
	printf("Average: %f\n", ((float)sum/n));


	return 0;
}
