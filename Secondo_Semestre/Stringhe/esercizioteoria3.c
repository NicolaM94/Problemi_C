/*Scrivere un programma che acquisisce due stringhe di al più 30
caratteri e le concatena in un terzo array.*/
#include <stdio.h>
#include <string.h>
#define DIM 30

void main () {

    char s1[DIM+1], s2[DIM+1];
    char s3[DIM+DIM+1];
    int i,j;

    printf("Inserisci la prima frase: \n");
    fgets(s1, DIM+1, stdin);
    printf("Inserisci la seconda frase: \n");
    fgets(s2, DIM+1, stdin);

    for (i = 0; i < strlen(s1)-1; i++) {
        s3[i] = s1[i];
    }
    printf("S3: %s", s3);
    printf("I: %d", i);
    for(j = i; j < strlen(s2); j++) {
        s3[j] = s2[j-i];
    }
    s3[j] = '\0';

    printf("%s", s3);

}