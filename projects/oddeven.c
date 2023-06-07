#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	if(number >= 0)
	{

	  if(number % 2 == 0)
		{
		  printf("It is a Even number.\n");
		}

	  else if (number % 2 == 1)
		{
		  printf("It is a Odd number.\n");
		}
	}

	else
	{
	  printf("It is a Negative number.\n");
	}

return 0;

}
