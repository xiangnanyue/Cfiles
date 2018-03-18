#include <stdio.h>

int carre2(int i) {
    return i*i;
}

int main(int argc, char* argv[]) {
    int i = 0;
    int j;
    i = carre(4); // implicit declaration, warning, 0 possible
    j = carre2(4);
    printf("%d\n", i);
    printf("%d\n", j);
    return 0;
}


int carre(int i) {
    return i*i;
}