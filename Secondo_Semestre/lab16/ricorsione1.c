/*Scrivere una funzione ricorsiva che calcola la
somma di tutti i naturali compresi tra 0 e x (x viene
letto da tastiera nel main, deve essere positivo, e viene
passato come parametro alla funzione).*/

#include <stdio.h>

int sommaRicorsiva(int x) {
    if (x == 0) {
        return 0;
    } else {
        return x + sommaRicorsiva(x-1);
    }
}


void main () {
    int x;

    scanf("%d", &x);
    printf("%d", sommaRicorsiva(x));
}