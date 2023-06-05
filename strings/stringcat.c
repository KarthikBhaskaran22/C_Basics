#include <stdio.h>
#include <string.h>

int main()
{
        int n, i;
        char str, str1[50], str2[50];

        printf("Enter the first string: ");
        scanf("%s", str1);

        printf("Enter the second String: ");
        scanf("%s", str2);

	//String Contatenation  -   str1 will be destination str2 will be the source.
        strcat(str1, str2);
        printf("Contatenation: %s \n", str1);

	return 0;
}	
