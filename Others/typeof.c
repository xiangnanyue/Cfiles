#include <stdio.h>

typedef struct {
    float reel;
    float imagine;
} complex_t ;

int main(int argc, char* argv[]) {
    complex_t c1; 
    complex_t c2;

    c1.reel = 1;
    c1.imagine = 2;

    c2 = c1;
    printf("c1.reel = %f\n", c1.reel);
    return 0;
}
