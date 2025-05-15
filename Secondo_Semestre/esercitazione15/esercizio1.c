/*Quiz lab 14
Leggere un array di 10 interi positivi, stampando per ogni elemento dell'array il valore 1 se tale elemento è primo
0 atrimenti. Se il numero non è primo stampa il numero dei suoi divisori.

Per verificare la primità utilizzare la funzione 

int verifica(int, int *);

*/

#include <stdio.h>
#define DIM 3

int verifica (int, int *);

int main () {
    int a[DIM];
    int i, primo, div;
    for (i = 0; i < DIM; i++) {
        scanf("%d ", a[i]);
    }
    for (i = 0; i < DIM; i++) {
        primo = verifica(a[i], &div);
        printf("%d %d %d", a[i], primo, div);
    }
    return 0;
}

int verifica (int num, int *div) {
    int d;
    *div = 0;
    // Utilizzo div per salvare i vari divisori
    for (d = 1; d <= num; d++) {
        if (num%d==0) {
            (*div)++;
        }
    }
    // Se ho trovato solo due divisori il numero è primo
    if (*div == 2) {
        return 1;
    }
    else {
        return 0;
    }
}