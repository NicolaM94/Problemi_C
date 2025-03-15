/*Scrivere un programma C che:
 Richiede all’utente di inserire 20 caratteri che
memorizza in un array, e altri due caratteri c e r.
 Restituisce una array costruito a partire dall’array
iniziale in cui ogni occorrenza di c è sostituita con r.*/

#include <stdio.h>
#define M 20

int main () {

    char c,r;
    char array [M];
    char out [M];

    printf("Inserisci i %d caratteri: \n", M);
    for (int i = 0; i < M; i++) {
        scanf(" %c", &array[i]);
    }
    
    printf("Inserisci c ed r: \n");
    scanf(" %c %c", &c, &r);

    for (int i = 0; i < M; i++) {
        if (array[i] == c) {
            out[i] = r;
        } else {
            out[i] = array[i];
        }
    }

    for (int i = 0; i < M; i++) {
        printf(" %c", out[i]);
    }
    printf("\n");


    return 1;
}