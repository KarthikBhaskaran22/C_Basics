#include <stdio.h>

int main()
{
        int n, i;
        char str[50];

        printf("Enter N: ");
        scanf("%d", &n);

        printf("Enter a String: ");
        scanf("%s", str);

        printf("%s \n", str);

        for(i = 0; i < n; i++)
        {
                printf("%c \n", str[i]);
        }

        return 0;
}
