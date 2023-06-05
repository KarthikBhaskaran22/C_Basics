#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d" ,&num2);

	if (num1 > num2)
	{
	   printf("First number is greater than Second number.\n");
	}

	else if (num1 < num2)
	{
	   printf("First number is lesser than Second number.\n");
	}

	else
	   printf("First number and Second number are equal.\n");

	return 0;
}
