/*Scrivere un programma C che apre un file di
testo “canzone.txt” contenente righe di al più 255
caratteri e conta quante volte è presente la stringa
“io” e quante volte la parola “mille”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#define BUF_LEN 255

int main () {

    FILE *fp;
    char word [BUF_LEN];
    char string [3];
    int mille_cnt = 0;
    int io_cnt = 0;

    fp = fopen("canzone.txt", "r");

    if (fp == NULL) {
        perror("Errore nell'apertura del file (1).\n");
        exit(-1);
    }

    while (!feof(fp)) {
        fscanf(fp,"%s",word);
        if (strcmp(word, "mille") == 0 || strcmp(word, "Mille")) {
            mille_cnt++;
        }
    }

    fclose(fp);

    fp = fopen("canzone.txt", "r");

    if (fp == NULL) {
        perror("Errone nell'apertura del file (2).\n");
        exit(-1);
    }

    // Metto il terminatore nella stringa all'ultimo posto, rimarrà sempre li perchè leggo 2 caratteri alla volta
    string[2] = '\0';
    
    // Evito di usare feof perchè potrebbe dare letture doppie
    while (fscanf(fp,"%c%c",&string[0], &string[1]) == 2) {
        if (strcmp(string, "io") == 0 || strcmp(string,"Io") == 0) {
            io_cnt++;
        }
        // Questo scorre il cursore sul file di una posizione in avanti
        fseek(fp, -1, SEEK_CUR);
    }
    fclose(fp);

    printf("La stringa 'io' compare %d volte mentre la parola 'mille' compare %d volte\n.", io_cnt, mille_cnt);

}