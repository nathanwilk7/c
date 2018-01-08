#include <stdio.h>

main ()
{
    int c;

    while (c = getchar() != EOF)
        putchar(c + '0');
    putchar(c + '0');
}
