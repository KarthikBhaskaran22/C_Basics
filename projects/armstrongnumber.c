#include <stdio.h>
#include <math.h>


int main()

{
        int num, copy, sum, digit;

        printf("Enter a number: ");
        scanf("%d", &num);

        sum = 0;
        digit = 0;

        copy = num;

	/*
	 
	   123 
	   digit count = 3

	   1^3 + 2^3 + 3^3 = 0+8+27 != 123 Hence it is not a Armstrong number.
          -----------------------------------------------------------------------
	  
	   1
	   digit count = 1
	   
	   1^1 = 1 Hence it is an Armstrong number.
	  -----------------------------------------------------------------------
   	   
	   370
	   digit count = 3

	   3^3 + 7^3 + 0^4 = 27+343+0 = 370 Hence it is an Armstrong number. 
	  -----------------------------------------------------------------------

	 */

        while (copy > 0)
        {
                copy = copy / 10;
                digit++;
        }

        copy = num;

        while (copy > 0)
        {
                sum = sum + pow(copy % 10, digit);
                copy = copy / 10;
        }

        if (sum == num)
        {
                printf("%d is a Armstrong number.\n", num);
        }

        else
	{
                printf("%d is not a Armstrong number.\n", num);
	}

	return 0;
}                      
