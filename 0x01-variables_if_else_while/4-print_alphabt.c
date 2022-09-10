#include <stdio.h>
/**
 * main is used to run the main program
 *
 * Return will return zero if no error and non zero if an error is found
*/
int main(void)
{
    int alphabt;
    alphabt = 'a';
    while (alphabt <= 'z')
    {
        if (alphabt == 'e')
        {
        }
        else
            if (alphabt == 'q')
            {
            }
            else
                putchar(alphabt);
        alphabt++;
    }
    putchar('\n');
    return (0);
}

