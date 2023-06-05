#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char str[50];

    strcpy(str, "Hello World!");   //strcpy - String Copy

    n = strlen(str);              //strlen - String lenght

    printf("%d \n", n);


    printf("Enter the String: ");
    scanf("%s", str);

    n = strlen(str);

    printf("%d \n", n);

    return 0;
}

