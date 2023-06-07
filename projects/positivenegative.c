#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num > 0)
	{
	  printf("Positive number.\n");
	}

	else if (num < 0)
	{
	  printf("Negative number.\n");
	}

	else if (num == 0)
	{
	  printf("0 is either positive or negative.\n");
	}

	else
	{
	  printf("Invalid number!\n");
	}

	return 0;
}
