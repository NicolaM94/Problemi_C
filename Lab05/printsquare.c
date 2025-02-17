/*Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li
richiede), visualizza un rettangolo di dimensione
a*b usando il carattere '*’.*/

#include <stdio.h>

int main () {

    int base, altezza;

    printf("Inserisci base e altezza: \n");
    scanf("%d %d", &base, &altezza);

    for (int a = 0; a < altezza; a++) {
        for (int b = 0; b < base; b++) {
            printf("*");
        }
        printf("\n");
    }

    return 1;
}