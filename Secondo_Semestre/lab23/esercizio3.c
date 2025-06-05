/*Diciamo che un array a[] è "quasi ordinato" se
tutti i valori negativi (se esistono) precedono i
valori maggiori o uguali di zero (se esistono); si noti
che i valori negativi possono comparire in ordine
qualsiasi, come pure i valori maggiori o uguali di
zero. Ad esempio l'array a[] = {-1, -7, 8, 10, 8, 1} è
quasi ordinato, come pure l'array a[] = {-9, -7, -1, -3}
e a[] = {13, 9, 0, 21, 33},
mentre l'array a[] = {3, -1, 4, 5} non lo è (compare
un valore >= 0 prima di uno negativo). Scrivere la
funzione int quasi_ordinato(int a[], int n) che, dato
in input un array a[] non vuoto e la sua lunghezza
n, ritorna 1 se e solo se a[] è quasi ordinato, 0
altrimenti.*/

#include <stdio.h>
#include <stdlib.h>

int quasi_ordinato (int array[], int size) {
    int res = 1;
    int i;
    for (i = 0; i < size-1; i++) {
        if (array[i] >= 0 && array[i+1] < 0) {
            res = 0;
        }
    }
    return res;
}

int main () {
    
    int *a;
    int size;
    int i;

    do {
        scanf("%d", &size);
    } while (size <= 0);

    a = (int *) malloc(sizeof(int)*size);

    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("L'array è quasi ordinato? %d\n", quasi_ordinato(a, size));

    return 0;
}