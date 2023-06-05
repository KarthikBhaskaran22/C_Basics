#include <stdio.h>

int main()
{
	int num1, num2, sum, sub, mul;
	float div, mod;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
    	scanf("%d", &num2);

	sum = num1 = num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	mod = num1 % num2;

	printf("Addition: %d \nSubtraction: %d \nMultiplication: %d \nDivision: %f \nModulus: %f", sum, sub, mul, div, mod);

	return 0;
}


