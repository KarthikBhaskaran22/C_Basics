#include <stdio.h>

int main()
{

	int a, b;

	printf("Enter a value to be incremented: ");
	scanf("%d", &a);
	printf("Before increment: %d\n", a);
	a++;
	printf("After increment: %d\n", a);

	printf("Enter a value to be decremented: ");
	scanf("%d", &b);
	printf("Before decrement: %d\n", b);
	b--;
	printf("After decrement: %d\n", b);

	return 0;

}
