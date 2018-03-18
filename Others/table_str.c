#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    // declare a table
    int tab1[10];
    char tab2[20];
    char tab3[] = "hello, world!";
    int i;
    /* initialize elements of array n to 0 */         
    for ( i = 0; i < 10; i++ ) {
        tab1[ i ] = i + 100; 
        /* set element at location i to i + 100 */
    }
    for ( i = 0; i < 10; i++ ) {
        printf("%d\n", tab1[i]);
    }
    
    // initialize the char table
    strcpy(tab2, "hello, world!\n");
    printf("%s", tab2);

    for (i = 0; i<14; i++) {
        printf("%c\n", tab3[i]); // what will fill the 15-19 index
    }

    // the function sizeof
    printf("the size of tab3 is %ld\n", sizeof(tab3) / sizeof(tab3[0]));
    return 0;
}