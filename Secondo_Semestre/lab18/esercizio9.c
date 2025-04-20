/*Scrivere un programma C che crea il file di testo
“tabellina.txt” con la tabellina pitagorica fino a un dato numero
(per es. fino a 5). Utilizza il formato "%3d\t" per allineare i
numeri a destra con almeno 3 spazi come dimensione minima.*/

#include <stdio.h>
#include <stdlib.h>

void main () {

    FILE *fp;
    int i,j;

    fp = fopen("tabellina.txt", "w");
    
    if (fp == NULL) {
        puts("Errore nell'apertura del file");
        exit(-1);
    }

    for (i = 1; i <=5 ; i++) {
        for (j = 1; j <=10; j++) {
            fprintf(fp,"%3d\t", i*j);
        }
        fprintf(fp,"%c",'\n');
    }
    fclose(fp);
}