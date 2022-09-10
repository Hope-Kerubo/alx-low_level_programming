#include <stdio.h>

/**
 * main is used to run the main program
 * Return will return zero if no error and non zero if an error is found

*/

int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    putchar('\n');
    return (0);
}
