/*Scrivere un programma che chiede all’utente di
inserire due sequenze di 5 numeri ciascuna
(salvandole in 2 array). Il programma stampa a
video se la seconda sequenza è una permutazione
della prima.*/

#include <stdio.h>
#define T 5


int main () {

    int seq1[T];
    int seq2[T];
    int flag = 1;
    int tempFlag = 0;

    printf("Inserisci la prima sequenza: \n");
    for (int i = 0; i < T; i++) {
        scanf("%d", &seq1[i]);
    }

    printf("Inserisci la seconda sequenza: \n");
    for (int i = 0; i < T; i++) {
        scanf("%d", &seq2[i]);
    }

    for (int i = 0; i < T; i++) {
        tempFlag = 1;
        for (int j = 0; j < T; j++) {
            if (seq1[i] == seq2[j]) {
                tempFlag = 0;
            }
        }
        if (tempFlag == 1) {
            flag = 0;
        }
    }


    if (flag == 0) {
        printf("Le due sequenze non sono permutazioni.\n");
    } else {
        printf("Le due sequenze sono permutazioni.\n");
    }

    return 1;
}
