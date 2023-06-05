#include <stdio.h>
#include <string.h>

void main()
{
        int n, i;
        char str, str1[50], str2[50];

        printf("Enter the first string: ");
        scanf("%s", str1);

        printf("Enter the second String: ");
        scanf("%s", str2);


	//String Reverse
        str1 = strrev(str1);
        printf("Reverse: %s \n", str1);

        //String length
        //n = strlen(str1);

        //String Compare - compares str1 and str2 - if 0 they are equal if not they are not equal.
	str = strcmp(str1, str2);
	printf("Comparision: %d \n", str);



	//String Contatenation  -   str1 will be destination str2 will be the source.
        strcat(str1, str2);
        printf("Contatenation: %s \n", str1);

}
