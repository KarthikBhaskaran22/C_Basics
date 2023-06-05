#include <stdio.h>

int main()
{
	int i, j, number;

	printf("Enter a number: ");
	scanf("%d", &number);


	/*
	   
	   1
	   1 2
	   1 2 3 
	   1 2 3 4

	*/



	for(i = 1; i <= number; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
