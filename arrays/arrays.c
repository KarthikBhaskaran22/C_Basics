#include <stdio.h>

int main()
{
	//Array
	int heights[50];

	//Assigning values
	heights[0] = 23;
	heights[1] = 76;
	heights[2] = 45;
	
	//Printing an array element
	printf("%d\n", heights[0]);
        printf("%d\n", heights[1]);
        printf("%d\n", heights[2]);

	//Updating an array
	heights[0] = 10;
        printf("%d\n", heights[0]);

	//Printing an unassigned array element //Default value will be 0 or some compliers we store a garbage value.
        printf("%d\n", heights[10]);

	//Printing an array using for loop
	for(int i = 0; i < 3; i++)
	{
		printf("%d \n", heights[i]);
	}

	//Taking an array elements as input from the user.
	for(int i = 3; i < 6; i++)
	{
		scanf("%d", &heights[i]);
	}

	return 0;
}
