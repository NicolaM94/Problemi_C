/*Scrivere un programma che dato un array di
interi (lungo 10) con i valori inseriti da tastiera
determina quanti massimi locali ci sono nell’array
stampando il risultato.*/

#include <stdio.h>

int main () {

    int array [10];
    int counter = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 1; i < 9; i++) {
        if (array[i-1] < array[i] && array[i+1] < array[i]) {
            counter++;
        }
    }

    // Devo considerare anche i casi in cui il massimo locale sia il primo o l'ultimo elemento dell'array
    // Li verifico singolarmente
    if (array[0] > array[1]) {
        counter++;
    }
    if (array[9] > array[8]) {
        counter++;
    }

    printf("Massimi locali: %d\n", counter);

    return 1;
}