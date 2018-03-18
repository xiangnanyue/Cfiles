#include <stdio.h>

/* get input into output */

int main()
{
    int c;
    while((c = getchar())!= EOF)
       {
            putchar(c);
            printf("%c", c);
       }
       printf("%ld", (long) c);
       printf("%c", -1);
       printf("%d", EOF);
       /* the char print out of EOF is ?*/
       /* the value print out -1 int*/

       return 0; 
}