#include <stdio.h>

int main()
{
	int i, number, sum;

	printf("Enter a value of N: ");
	scanf("%d", &number);
	
	for( i = 1; i <= number; i++ )
	{
		sum = sum + i;
	}
	printf("Sum if N numbers = %d \n", sum);

return 0;
}

