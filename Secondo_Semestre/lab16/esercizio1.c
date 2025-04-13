/*Es0_1 (passaggio di array di array): Scrivere
un programma composto di un main ed una
funzione
scambiaRighe(int **mat, int r1, int r2)
in cui il main chiede all'utente gli elementi di una
matrice 4x3 di numeri interi e gli indici r1 ed r2
delle due righe da scambiare, e la funzione
scambiaRighe scambia le righe in posizione r1 ed
r2 della matrice mat. Il main infine stampa la
matrice con le righe r1 ed r2 scambiate.*/

#include <stdio.h>

void main () {

    int **matrix;
    int i,j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", matrix[i][j]);
        }
        (*matrix)++;
    }

    for (i = 0; i < 4; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d", matrix[i][j]);
            }
            (*matrix)++;
        }
    
}