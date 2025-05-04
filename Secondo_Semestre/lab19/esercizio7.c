/*Modificare l’esercizio precedente in modo che la
parola da cercare sia letta da tastiera*/

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
    char tester [BUF_LEN];
    int tester_cnt = 0;

    puts("Inserisci la parola da ricercare: ");
    scanf("%s", tester);

    fp = fopen("canzone.txt", "r");

    if (fp == NULL) {
        perror("Errore nell'apertura del file (1).\n");
        exit(-1);
    }

    while (!feof(fp)) {
        fscanf(fp,"%s",word);
        if (strcmp(word, tester) == 0) {
            tester_cnt++;
        }
    }

    fclose(fp);

    printf("La parola '%s' compare %d volte\n.", tester, tester_cnt);

}