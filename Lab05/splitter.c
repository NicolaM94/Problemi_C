/*Scrivere un programma che acquisisca un indice X
tra 0 e 9 (controllare validità del valore inserito) e
una sequenza di 10 numeri interi. Il programma
dovrà stampare la somma dei numeri in posizioni
minori di X e il prodotto dei numeri in posizioni
successive a X.*/

#include <stdio.h>


int main () {

    int indice = -1;
    int numeri [10];

    int sum = 0;
    int prod = 1;

    printf("Inserisci l'indice (0-9): \n");
    while (indice < 0 || indice > 10) {
        scanf("%d", &indice);
    };

    printf("Inserisci 10 numeri: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeri[i]);
    }

    for (int i = 0; i < indice; i++) {
        sum += numeri[i];
    }
    for (int i = indice; i < 10; i++) {
        prod *= numeri[i];
    }

    printf("Somma dei numeri da 1 a %d: %d\n", indice, sum);
    printf("Prodotto dei numeri da %d a 10: %d\n", indice, prod);

    return 1;
}