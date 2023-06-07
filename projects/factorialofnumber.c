#include <stdio.h>

int main()
{
	int i, number, fact = 1;
	printf("Enter a number: ");
	scanf("%d", &number);

        if (number >= 1)
	{
		for( i = 1; i <= number; i++ )
		{
			fact = fact * i;
		}
		printf("Factorial of the number: %d \n", fact);	
	}

        else if (number == 0)
        {
                printf("Factorial of Zero (0) is One (1). \n");
        }

        else if (number <= -1)
                printf("Please enter a positive number. \n");

	return 0;
}
