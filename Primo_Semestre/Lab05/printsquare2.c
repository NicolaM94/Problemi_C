/*Scrivere un programma che ricevuto in ingresso
due numeri interi positivi a e b (se così non è, li
richiede), visualizza un rettangolo di dimensione
a*b usando il carattere ‘*’ sui bordi e il carattere ‘X’
all’interno.*/

#include <stdio.h>

int main () {

    int base = 0;
    int altezza = 0;

    // Check dell'input
    while (base <= 0 || altezza <= 0) {
        scanf("%d %d", &base, &altezza);
    }
    
    // Stampa del rettangolo
    for (int i = 0; i < base; i++) {
        if (i == 0 || i == base-1) {
            for (int j = 0; j < altezza; j++) {
                printf("*");
            }
            printf("\n");
        } else {
            printf("*");
            for (int j = 1; j < altezza-1; j++) {
                printf("X");
            }
            printf("*\n");
        }

    }


    return 1;
}