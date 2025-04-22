/*
Es2: Scrivere due sottoprogrammi maxr e maxc che
prendono in ingresso una matrice 3X3 di interi e
restituiscono rispettivamente al chiamante l’indice della
riga/colonna in cui la somma di tutti gli elementi è
massima.
*/

#include <stdio.h>

int maxr (int (*matrice)[3]) {

    int maxindex = 0;
    int sum = 0;
    int tempsum = 0;
    int i,j;

    for (i = 0; i < 3; i++) {
        tempsum = 0;
        for (j = 0; j < 3; j++) {
            tempsum += matrice[i][j];
        }
        if (tempsum > sum) {
            sum = tempsum;
            maxindex = i;
        }
    }

    return maxindex;

}

int maxcol (int (*matrice)[3]) {
    int sum;
    int index;
    int i,j;

    



}

void main () {

    int matrix [3][3];
    int i,j;

    puts("Inserisci i 9 valori della matrice: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Indice riga massima: %d\n", maxr(matrix));

}