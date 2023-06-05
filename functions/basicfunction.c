#include <stdio.h>

int add()        //Function definition
{
        int a = 5;
        int b = 7;
        int c = a + b;
        return c;
}


int main()
{
        int result = add();   //Function call
        printf("%d \n", result);

        return 0;
}
