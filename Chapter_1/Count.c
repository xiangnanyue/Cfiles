#include <stdio.h>

/*
E 1-8 P20
write a program to count the number of tabs, lines, and blanks
the symbol for blank is ' '
*/
int main()
{
    int c;
    long tabs, blanks, lines;
    
    tabs = blanks = lines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t') tabs++;
        if (c == ' ') blanks++;
        if (c == '\n') lines++;
    }

    printf("tabs = %ld, blanks = %ld, lines = %ld", tabs, blanks, lines);
    return 0;
}