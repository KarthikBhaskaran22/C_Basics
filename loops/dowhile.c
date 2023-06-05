#include <stdio.h>

int main ()
{
	int x, num;

	printf("Enter a number: ");
	scanf("%d", &num );

	x = 1;

	do
	{
		printf("%d. Hello World!\n", x);
		x++;
	}
	while (x <= num);

	return 0;	
}
