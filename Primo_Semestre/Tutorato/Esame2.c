/*Scrivere un programma C che chiede all'utente di inserire i dati
interi di una matrice bidimensionale quadrata di dimensione 5. Il
programma calcola la matrice ruotata di 90 gradi in senso
antiorario, salvandola in una nuova variabile e visualizza il
risultato.*/

#include <stdio.h>
#define M 5


int main () {

    int matrice [M][M];
    int copia [M][M];
    int i,j;

    // Raccolgo le entrate
    for (i=0; i<M; i++) {
        for (j=0; j<M; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    // Compila la matrice copia
    for (i = 0; i < M; i++) {
        for (j = M-1; j >= 0; j--) {
            copia[M-j-1][i] = matrice[i][j];
        }
    }
    printf("\n");

    // Stampa la matrice
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", copia[i][j]);
        }
        printf("\n");
    }

    return 1;
}
