/*Scrivere un programma C che:
 Richiede all’utente di inserire 20 numeri interi a piacere e li salva
in un array.
 Crea e stampa un array risultato in cui:
 Ogni elemento in posizione pari (n) è uguale alla somma degli
elementi dell’array originale in posizione pari dall’inizio fino a n.
 Ogni elemento in posizione dispari (m) è uguale alla somma
degli elementi dell’array originale in posizione dispari dall’inizio
fino a m*/

#include <stdio.h>
#define M 20

int main () {

    int array [M];
    int out [M];

    for (int i = 0; i<M; i++) {
        scanf("%d", &array[i]);
    }

    out[0] = array[0];
    out[1] = array[1];

    // In pratica sommiamo i numeri a due a due
    for (int i = 2; i<M; i++) {
        out[i] = array[i] + out[i-2];
    }

    for (int i = 0; i < M; i++) {
        printf("%d ", out[i]);
    }


    return 1;
}