/*Scrivere un programma che acquisisce una stringa di al più 30
caratteri, la copia al rovescio in un secondo array e visualizza il
risultato.*/
#include <stdio.h>
#include <string.h>
#define DIM 30

void main () {

    char stringa [DIM+1];
    char copia [DIM+1];
    int i;

    fgets(stringa, DIM+1, stdin);

    for (i = strlen(stringa); i >= 0; i--) {
        copia[strlen(stringa)-1-i] = stringa[i];
    }
    
    copia[strlen(stringa)] = '\0';

    printf("%s", copia);

}