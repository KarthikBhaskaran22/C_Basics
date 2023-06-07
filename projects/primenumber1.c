#include <stdio.h>

int main ()
{
        int  i, j, flag, number;

        printf("Enter a number: ");
        scanf("%d", &number);

	for(j = 1; j <= number; j++)
	{
		if(j == 1)
		{
			printf("%d is neither a Prime number nor a Composite number.\n", j);
			continue;
		}
		flag = 0;
        	for (i = 2; i < j; i++)
        	{
                	if(j % i != 0)
                	{
                        	continue;
                	}
                	else
                	{
                        	flag = 1;
                        	printf("%d is a Composite number.\n", j);
                        	break;
                	}
        	}

		if(flag == 0)
        	{
                	printf("%d is a Prime number.\n", j);
        	}
	}
        return 0;
}
