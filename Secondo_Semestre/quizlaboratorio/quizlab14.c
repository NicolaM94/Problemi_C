/*Scrivere un programma che legge un array di 10 interi sicuramente positivi.

Il programma stampa, per ogni elemento dell'array il valore, 1 se è primo 0 se non è primo, il numero dei suoi divisori (utilizzare printf("%d %d %d\n" ....).

Per verificare se un intero è primo o no e calcolare quanti sono i suoi divisori utilizzare la funzione con prototipo

int verifica(int, int *);

che preso un intero come parametro, restituisce 1 se è primo, 0 se non è primo e inserisce in un parametro passato per indirizzo il numero dei divisori*/

#include<stdio.h>
#define DIM 10

int verifica(int, int *);

int main(){
    
    int divisori, primi;
    int array[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10; i++) {
        divisori = 2;
        primi = verifica(array[i], &divisori);
        printf("%d %d %d\n", array[i], primi, divisori);
    }

    return 0;
}

int verifica (int n, int *divisori) {
    
    int primo = 1;
    int i;

    for (i = 2; i < n; i++) {
        if (n%i == 0) {
            primo = 0;
            (*divisori)++;
            
        }
    }
    return primo;

}