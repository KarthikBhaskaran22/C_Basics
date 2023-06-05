#include <stdio.h>

int main()
{
	int x, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	x = 1;

	while( x <= num)
	{
		printf("%d. Hello World! \n", x);
		x++;

	}

return 0;
}
