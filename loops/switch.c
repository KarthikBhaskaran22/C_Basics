#include <stdio.h>

int main()
{
        int number1, number2;
        char operator;

        printf("Enter the first number: ");
        scanf("%d", &number1);

        printf("Enter the second number: ");
        scanf("%d", &number2);

        printf("Enter the operator: ");
        scanf("\n %c", &operator);

        switch (operator)
        {
        case '+':
                printf("Sum = %d \n", number1 + number2);
                break;

        case '-':
                printf("Difference = %d \n", number1 - number2);
                break;

        case '*':
                printf("Product = %d \n", number1 * number2);
                break;

        case '/':
                printf("Quotient = %d \n", number1 / number2);
                break;

        default:
                printf("Please enter a valid operator. \n");
        }

return 0;

}
