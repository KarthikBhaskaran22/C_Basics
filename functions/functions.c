#include <stdio.h>

int add(int num1, int num2)        //Function definition
{
	int sum, diff;

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        sum = num1 + num2;
	diff = num1 - num2;
	
	printf("Diff: %d \n", diff);

        return sum;
}


int main()
{
	int num1, num2;

	/*printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);*/

        printf("Sum1: %d \n", add(num1, num2));  //Function call
        printf("Sum2: %d \n", add(num1, num2));
	printf("Sum3: %d \n", add(num1, num2));       
	printf("Sum4: %d \n", add(num1, num2));

        return 0;
}
