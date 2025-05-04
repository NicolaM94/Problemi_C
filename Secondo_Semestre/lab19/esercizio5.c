/*Scrivere un programma C che apre un file di testo “testo.txt”
contenente parole ciascuna di al massimo 15 caratteri. Il programma trova
tutte le parole più lunghe di 4 caratteri e ripetute due volte di seguito nel
testo e le stampa a video. Ad esempio, se il file “testo.txt” contiene il testo:
bisogna studiare passo passo e adagio adagio per
ottenere un voto alto alto
Il programma visualizzerà il testo:
passo adagio*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#define BUF_DIM 15

int main () {

    FILE *fp;
    char buf [BUF_DIM];
    int i;
    char temp [BUF_DIM];

    fp = fopen("testo.txt","r");

    if (fp == NULL) {
        perror("Errore nell'apertura del file: ");
        exit(-1);
    } else {

        fscanf(fp,"%s", buf);

        while (!feof(fp)) {
            fscanf(fp,"%s", temp);
            if (strcmp(buf,temp) == 0) {
                printf("%s ", buf);
            }       
            
        }
    
        // NON FINITO

    }

    fclose(fp);

}