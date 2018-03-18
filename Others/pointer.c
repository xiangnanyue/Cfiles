#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 7; 
    float r = 3.14;

    int * ptr1 ;
    float * ptr2;
    void * ptr3;

    ptr1 = &i;
    ptr2 = &r;

    printf("the address is %p\n", ptr1);
    printf("the address is %p\n", ptr2);
    printf("the address is %p\n", ptr3);

    return 0;
}