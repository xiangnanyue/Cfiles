#include <stdio.h>

// in C no real true or false exist, char c = 0 ; for false
// yet we can define some
enum bool {
    false,
    true=1
}; //without explicit definition, the first one is 0

typedef enum bool bool_t;

int main(int argc, char* argv[]) {
    bool_t b = false;
    if (b) printf("False\n");
    else printf("True\n");

    return 0;
}