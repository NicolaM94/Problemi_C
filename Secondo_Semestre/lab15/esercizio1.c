/*Scrivere sottoprogramma conta che preso come
parametro un array di interi, la sua dimensione (al
massimo di 10 interi) ed un puntatore ad una variabile
intera in cui salvare uno dei risultati, conta quanti
numeri dispari e quanti numeri primi sono presenti
nell’array e restituisce entrambi i valori al chiamante
(uno tramite il return e l’altro tramite il terzo parametro
della funzione). Il main chiede in ingresso all’utente un
array di massimo 10 interi (-1 per terminare),
richiamando il sottoprogramma conta stampa i due
valori numerici ottenuti.*/

#include <stdio.h>

int isPrime (int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}


int conta (int *array, int dim, int *dispari) {

    int i;
    int primi = 0;
    *dispari = 0;

    for (i = 0; i < dim-1; i++) {
        if (array[i]%2==1) {
            (*dispari)++;
        }
        if (isPrime(array[i]) == 1) {
            primi++;
        }
    }
    return primi;
}

void main () {

    int array [10];
    int i = 0;
    int temp = 0;
    int dispari, primi;

    puts("Inserisci 10 numeri naturali (-1 per terminare): ");
    for (i = 0; i < 10 && temp != -1; i++) {
        scanf("%d", &temp);
        array[i] = temp;
    }
    
    primi = conta(array, i, &dispari);

    printf("Primi: %d   Dispari: %d\n", primi, dispari);
}