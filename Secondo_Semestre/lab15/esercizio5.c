/*Una funzione leggi che richiede all’utente 10 numeri interi non negativi
nell’intervallo [0,10] e li memorizza in un array.
 Una funzione media che calcola la media dei voti inseriti.
 Una funzione moda cha calcola la moda dei voti inseriti.
 La moda è il valore che compare più frequentemente. In caso ci siano più
numeri con la stessa frequenza ritornare uno qualsiasi di essi.
 Usare un array aggiuntivo per memorizzare le frequenze.
 Una funzione mediana che calcola la mediana dei voti inseriti:
 Dato un array di n elementi ordinati, la mediana è il valore centrale:
 Se n è dipari la mediana è il valore che occupa la posizione (n+1)/2.
 Se n è pari la mediana è la media dei valori che occupano la posizione
n/2 e (n/2)+1.
 Tale funzione richiamerà una funzione ordina che ordina gli elementi
dell’array e li memorizza in un altro array.
 Una funzione main che richiama le altre funzioni e stampa i risultati
ottenuti.
 Le funzioni devono essere parametriche nella dimensione dell’array*/

#include <stdio.h>
#include "../ordinamenti/naivesort.c"

int leggi (int *s) {
    int i;
    puts("Inserisci 10 numeri non negativi tra 0 e 10: ");
    for (i = 0; i < 10; i++) {
        do {
            scanf("%d", s+i);
        } while (*(s+i) < 0 || *(s+i) > 10);
    }
}

float media (int *s, int dim) {
    float sum = 0;
    int i;

    for (i = 0; i < dim; i++) {
        sum += *(s+i);
    }
    return sum/dim;
}

float mediana (int *s, int dim) {
    naiveSort(s, dim);
    if (dim%2==1) {
        return s[(dim/2)+1];
    }
    return (s[(dim/2)+1]+s[(dim/2)])/2;
}

int moda (int *s, int dim) {

    int frequenze [10] = {0,0,0,0,0,0,0,0,0,0};
    int i;
    int temp, max;

    for (i = 0; i < dim; i++) {
        frequenze[s[i]]++;
    }

    temp = frequenze[0];
    max = 0;
    for (i = 1; i < 10; i++) {
        if (frequenze[i] > temp) {
            temp = frequenze[i];
            max = i;
        }
    }
    return max;
}

void main () {

    int numArray [10];
    int i;

    leggi(numArray);


    printf("La media è pari a: %.2f\n", media(numArray, 10));
    printf("La mediana è pari a: %.2f\n", mediana(numArray, 10));
    printf("La moda è pari a: %d\n", moda(numArray, 10));
}