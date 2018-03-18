# include <stdio.h>

int main(int arg, char * argv []) {
    printf("%d\n", arg);
    printf("%s\n%s\n%s\n", *argv, *(argv+1), *(argv+2));

    return 0;
}