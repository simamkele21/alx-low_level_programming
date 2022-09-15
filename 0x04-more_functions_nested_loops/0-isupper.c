#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - check if c is uppercase
 * 
 * @c: input for alphabet
 * 
 * Return: 1 if c is uppercase, 0 otherwise
 */

int main()
{
    char c;

    c = 'C';
    printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));

    c = '+';
    printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));

   return 0;
}