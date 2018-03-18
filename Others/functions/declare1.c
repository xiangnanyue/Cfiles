#include <stdio.h>

// we can declare a function before initialize it.
int carre(int i);
void affichage();

int main(int argc, char* argv[]) {
    int i = 0;
    int j;
    i = carre(4); // explicit declared, no warning
    printf("%d\n", i);
    affichage();
    return 0;
}

int carre(int i) {
    return i*i;
}

void affichage(){
    printf("afficher");
    return; // for void function, return; or no return
}