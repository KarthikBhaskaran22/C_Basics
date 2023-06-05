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

	//String Compare - compares str1 and str2 - if 0 they are equal if not they are not equal.
        str = strcmp(str1, str2);
        printf("Comparision: %d \n", str);

	return 0;
}
