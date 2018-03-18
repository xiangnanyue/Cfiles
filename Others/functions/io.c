#include <stdio.h>
#define NMOTS 500

int main(int argc, char* argv []) {
    /* 1 entre l'utilisateur et le terminal */
    char str[80];
    char mot[30];
    int lec;

    printf("enter your name :");
    scanf("%s", str);  // ceci est bloquant
    printf("hello, M. %s\n", str);

    /* 2 sur le disque: write and read a file */
    FILE * f = fopen("trial.txt", "w"); 
    fprintf(f, "Ceci est un %s. \n", "exemple");
    // use "r" when the file exists
    FILE * fichier = fopen("enum.c", "r");
    if (fichier==NULL) {
        printf("this file doesn't exist.");
        return 0;
    }
    for (int i=0; i<NMOTS; i++) {
        lec = fscanf(fichier, "%s", mot); // mot by mot
        if (lec==EOF) break; // EOF end of string (files)
        if (lec != 1) printf("i = %d : problem lecture\n", i);
        printf("lec: %d, mot %d : %s\n", lec, i, mot);
    }
    /* 3 chaines de caracteres en memoire */
    // now we use sscanf and sprintf
    // it returns the number of elements found and impacted
    char entete[128];
    char jour[] = "lundi", mois[] = "avril";
    int num = 1;

    sprintf(entete, "Paris, le %s %d %s", jour, num, mois);
    printf("%s", entete);

    return 1;
}