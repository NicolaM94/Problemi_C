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
#define DIM 3

void main () {

    FILE *fp;
    int matrix [DIM][DIM];
    int i,j;

    fp = fopen("out.txt","r");
    if (fp != NULL) {
        printf("Errore di apertura del file\n");
        return;
    }
    
    while (!feof(fp)) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                fscanf(fp, "%d ", &matrice[i][j]);
            }
        }
    }




}