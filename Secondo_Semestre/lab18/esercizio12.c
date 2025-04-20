/*Si scriva un programma C opportunamente scomposto
in funzioni e procedure che permetta all’utente di inizializzare
una matrice di interi di dimensione NxN (con N dato) con
numeri positivi presi dal file «input.txt». Supponendo che il
file contenga un numero sufficiente di valori positivi.
Dopo aver stampato la matrice a video, il programma deve
trovare il minimo di tutti i valori inseriti nella matrice e
stampare in un file di nome “risultato.txt” tale valore.
Ad esempio, dato N=4, se l’utente inserisse tramite file la
seguente matrice:*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#define DIM 3


int main () {

    FILE *fp;
    int i,j;
    int matrix[3][3];
    int temp;
    int err;

    // Preinizializzo la matrice con tutti zeri in modo da coprire eventuali "buchi" nel contenuto del file
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            matrix[i][j] = 0;
        }
    }

    fp = fopen("input2.txt","r");

    if (fp == NULL) {
        perror("Errore di apertura del file: ");
        exit(-1);
    }
    for (i = 0; i < DIM && !feof(fp); i++) {
        for (j = 0; j < DIM && !feof(fp); j++) {
            fscanf(fp,"%d", &temp);
            matrix[i][j] = temp;
        }   
    }
    fclose(fp);

    temp = matrix[0][0];
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] > temp) {
                temp = matrix[i][j];
            }
        }
        printf("\n");
        
    }
    
    fp = fopen("risultato.txt", "w");
    if (fp == NULL) {
        perror("Errore nella creazione/apertura del file di destinazione.");
        exit(-1);
    } else {
        fprintf(fp,"%d",temp);
    }
    fclose(fp);
    
    return 0;
}