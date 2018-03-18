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

struct complex {
    long k;
    int i;
    char c;
};

typedef struct complex complex_t;

int main(int argc, char* argv[]) {
    affichage();
    complex_t ct;
    int ss = sizeof(long) + sizeof(int)  + sizeof(char); 
    printf("size of struct complex is %d\n", (int)sizeof(complex_t));
    printf("long + int + char is of size %d", ss);
    
    // the struct is normally a little larger size than 
    // the contents' size.
    return 0;
}