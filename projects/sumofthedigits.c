#include <stdio.h>

int main ()
{
	int num, sum;

	printf("Enter a number: ");
	scanf("%d", &num);

	sum = 0;

	while ( num > 0 )
	{

		/* 
		   
		   123/10 = 12
		   12/10 = 1
		   1/10 = 0 
		   
		*/

		/* 
		 
		   123%10 = 3  
		   12%10 = 2
		   1%10 = 1

		  sum = 3 + 2 + 1 = 6
		 
		*/

		sum = sum + ( num % 10 );
		num = num / 10;
	}
	printf("Sum of the digits: %d\n", sum);

		
	return 0;
}
