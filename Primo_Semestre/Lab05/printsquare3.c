/*Scrivere un programma che ricevuto in ingresso un
numeri interi positivi a (se così non è, lo richiede),
visualizza un quadrato di lato a usando il carattere ‘X’
sulla diagonale principale e il carattere ’*’ altrove.*/

#include <stdio.h>

int main () {

    int n;

    printf("Inserisci un numero: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("X");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }


    return 1;
}