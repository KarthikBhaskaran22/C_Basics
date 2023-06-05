#include <stdio.h>
int main()
{
	int a, b;

	printf("Enter 0 or 1: ");
	scanf("%d", &a);

	printf("Enter 0 or 1: ");
	scanf("%d", &b);

	printf("A = %d\n", a);
	printf("B = %d\n", b);

	printf("A AND B: %d\n", a && b);
	printf("A OR B: %d\n", a || b);
	printf("NOT of A: %d\n", !(a));
	printf("NOT of B: %d\n", !(b));

	return 0;
}
