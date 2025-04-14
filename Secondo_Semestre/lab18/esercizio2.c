/*Scrivere un programma C che apre in lettura un file di
nome input1.txt - creato precedentemente (vedi il file fornito) –
e ne mostra il contenuto a video. Non sapendo cosa contiene il
file leggete un carattere alla volta (con fscanf %c).*/

#include <stdio.h>
#define BUF 512


void main () {

    FILE *fp;
    int reader;
    char stringa [BUF];


    fp = fopen("input1.txt", "r");
    reader = fscanf(fp,"%s",stringa);
    
    while (reader > 0) {
        printf("%s", stringa);
        reader = fscanf(fp,"%s", stringa);
    }
    printf("\n");
    fclose(fp);
}