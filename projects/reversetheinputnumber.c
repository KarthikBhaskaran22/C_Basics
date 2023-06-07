#include <stdio.h>

int main()
{
	int number, copy, reverse;

	printf("Enter the number: ");
	scanf("%d", &number);


	reverse = 0;
	copy = number;

	
	while(copy > 0)
	{
		reverse = reverse * 10;

		reverse = reverse + (copy % 10);
		copy = copy / 10;
	}
	printf("Reverse of %d is %d\n", number, reverse);

	return 0;
}
