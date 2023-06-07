#include <stdio.h>

int main()
{
	int i, number, sum;

	printf("Enter the value of N: ");
	scanf("%d", &number);

	i = 1;
	while ( i <= number )
	{
		sum = sum + i;
		i++;
	}
	printf("Sum of N numbers = %d \n", sum);

return 0;
}
