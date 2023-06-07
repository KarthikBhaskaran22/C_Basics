#include <stdio.h>

int main ()
{
	int  i, flag, number;
	
	printf("Enter a number: ");
	scanf("%d", &number);

	for (i = 2; i < number; i++)
	{
		if(number % i != 0)
		{
			continue;
		}
		else
		{
			flag = 1;
			printf("%d is not a Prime number.\n", number);
			break;
		}
	}

	if(flag == 0)
	{
		printf("%d is a Prime number.\n", number);
	}

	return 0;
}
