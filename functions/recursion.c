#include <stdio.h>

int fact(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	return num * fact(num - 1); //Recursive case - calling the function inside the same function.	
}

int main()
{
	int num, result;

	printf("Enter a number: ");
	scanf("%d", &num);

	result = fact(num);

	printf("Factorial of %d is %d \n", num, result);

	return 0;
}
