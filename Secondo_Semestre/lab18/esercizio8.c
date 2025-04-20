/*Scrivere un programma C che chiede all’utente una
sequenza di numeri a priori illimitata e che termina con
l’inserimento del numero 0 – non fa parte della sequenza. Il
programma deve salvare i numeri (0 escluso) in un file di nome
valori.txt e come ultimo valore deve scrivere nel file quanti
numeri sono stati salvati. Ad esempio se l’utente inserisce 5 2 4
0 nel file nel file valori.txt troveremo 5 2 4 3*/

#include <stdio.h>
#include <stdlib.h>

void main () {

    FILE *fp;
    int temp;
    int writer;


    fp = fopen("out.txt","w");
    if (fp == NULL) {
        printf("Errore nella creazione del file\n");
        exit(-1);
    }

    do {
        scanf("%d", &temp);
        if (temp != 0) {
            writer = fprintf(fp,"%d ", temp);
        }
    } while (temp != 0);

    fclose(fp);

}