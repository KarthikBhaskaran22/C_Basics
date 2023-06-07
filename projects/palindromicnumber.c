#include <stdio.h>

int main ()
{
	int number, copy, reverse;

	printf("Enter a number: ");
	scanf("%d", &number);

	reverse = 0;
	copy = number;

	while (copy > 0)
	{
		reverse = reverse * 10;

		reverse = reverse + (copy % 10);
		copy = copy / 10;
	
	}

	if (reverse == number)
	{
		printf("%d is Palindrome number.\n", reverse);
	}
	else
	{
		printf("%d is not a Palindrome number.\n", reverse);
	}

	return 0;
}
