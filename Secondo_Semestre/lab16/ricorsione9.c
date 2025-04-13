/*Scrivere una funzione ricorsiva che dato
un array di interi, la sua dimensione effettiva e
qualsiasi altro parametro ritenuto utile, calcola
la somma degli elementi dell’array.*/

#include <stdio.h>
#define DIM 50

int sommaRicorsivaArray (int array[], int maxPos) {

    if (maxPos == 0) {
        return array[0];
    } else {
        return array[maxPos] + sommaRicorsivaArray(array, maxPos -1);
    }

}

void main () {

    int arrayInput [DIM];
    int temp, count;
    int somma;

    // Inserimento dati
    puts("Inserisci l'array di interi (max 50, 0 per terminare): ");
    temp = -6;
    count = 0;
    while (temp != 0) {
        scanf("%d", &temp);
        if (temp != 0) {
            arrayInput[count] = temp;
            count++;
        }
    }

    somma = sommaRicorsivaArray(arrayInput, count-1);
    printf("La somma è pari a: %d\n", somma);

}