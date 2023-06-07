
#include <stdio.h>

int main()
{
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);

	if(year % 100 == 0)
	{
		if (year % 400 == 0)
		{
		  printf("It is a Leap Year. \n");
		}
		else
		{
		  printf("It is not a Leap Year. \n");
		}
	}

	else if (year % 4 == 0)
	{
	  printf("It is a Leap Year. \n");
	}
	
	else
	{
	  printf("It is not a Leap Year. \n");
	}

return 0;
	
}
