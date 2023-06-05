#include <stdio.h>

int main()
{
	int x, num;

	printf("Enter a number: ");
	scanf("%d", &num);

	for(x = 1; x <= num; x++)
	{
		printf("%d. Hello World! \n", x); //1. Hello World 2. Hellw World! ..... 100. Hello World!.
	}

return 0;
}
