# include <stdio.h>

// sizeof each type

void affichage() {
    long k;
    int i;
    short l;
    char car;

    printf("sizeof(long) = %ld, sizeof(k) = %ld\n", sizeof(long), sizeof(k));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(short) = %ld\n", sizeof(short));
    printf("sizeof(char) = %ld\n", sizeof(char));

}

int main(int argc, char* argv[]) {
    affichage();
    
    
    
    return 0;
}