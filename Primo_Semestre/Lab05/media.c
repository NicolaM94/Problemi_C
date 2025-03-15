/*Scrivere un programma che data una sequenza
di numeri positivi che termina con -1 (sentinella,
non fa parte della sequenza) stampa a video la
media dei valori e quanti numeri sono stati
inseriti (sentinella esclusa).*/

#include <stdio.h>
#define FLAG -1

int main () {

    int counter = 0;
    float total = 0;
    float input;

    printf("Inserisci numeri consecutivi per calcolarne la media (inserisci -1 per terminare): \n");

    do {
        scanf("%f", &input);
        if (input != FLAG) {
            counter ++;
            total += input;
        }
        
    } while (input != FLAG);

    if (counter == 0) {
        printf("Nessun numero valido è stato inserito.\n");
    } else {
        printf("La media dei valori inseriti è pari a %.2f.\n", total/counter);
    }

    return 1;
}