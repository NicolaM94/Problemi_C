/*Scrivere una funzione ricorsiva che calcola
il resto della divisione tra due interi positivi
(avendo a disposizione solo somme e sottrazioni).*/

#include <stdio.h>

int restoDellaDivisione (int a, int b) {
    if (a < b) {
        return a;
    } else {
        return restoDellaDivisione(a-b,b);
    }
}

void main () {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("Resto: %d", restoDellaDivisione(a,b));
}