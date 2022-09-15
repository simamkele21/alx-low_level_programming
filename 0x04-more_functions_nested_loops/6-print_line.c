#include "main.h"

/**
* print_line - print a line
* 
* @n: number of lines to print
*/

void print_line(int n);
{
    int lnChr;

    if (n <= 0)
        _putchar('\n');
    else
    {
        for (lnChr = 0; lnChr < n; ++lnChr)
            _putchar('_');
        _putchar('\n');
    }
}
