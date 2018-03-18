#include <stdio.h>

/*
E 1-9 P20 Replace several blanks by one blanks
can also be done by using two whiles
*/
int main()
{
    int c;
    long blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && blanks >= 1)
        {
            blanks++;
            continue;
        }
        if (c == ' ')
        {
            blanks++;
            putchar(c);
            continue;
        }
        
        blanks = 0;
        putchar(c);
    }
    return 0;
}