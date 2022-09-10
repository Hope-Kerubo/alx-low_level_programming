#include <stdio.h>
/**
 * main is used to run the main program
 *
 * Return will return zero if no error and non zero if an error is found
*/
int main(void)
{
    int alphabet, ALPHABET;

    alphabet = 'a';
    ALPHABET = 'A';
    while (alphabet <= 'z')
    {
        putchar(alphabet);
        alphabet++;
    }
    while (ALPHABET <= 'Z')
    {
        putchar(ALPHABET);
        ALPHABET++;
    }
        putchar('\n');
    return (0);

