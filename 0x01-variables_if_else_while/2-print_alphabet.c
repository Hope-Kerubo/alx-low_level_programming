#include <stdio.h>
/**
 * main is used to run the main program
 *
 * Return will return zero if no error and non zero if an error is found
*/
int main(void)
{
    int alphabet;
    alphabet = 'a';
    while (alphabet <= 'z')
    {
        putchar(alphabet);
        alphabet++;
    }
    putchar('\n');
    return (0);
}
