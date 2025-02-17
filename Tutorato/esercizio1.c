/*
ESAME 21 09 23 A 1
Dati in input da tastiera una matrice di interi NxM (N righe e M colonne) e un numero L sicuramente
maggiore di 0 e sicuramente minore di N, stampi:
• OK se nella matrice esiste almeno una sequenza verticale di lunghezza almeno L di elementi che
crescono o decrescono linearmente (cioè in cui la differenza tra due elementi successivi è costante).
• KO altrimenti.
*/

#include <stdio.h>
#define N 6
#define M 3

int main () {

    int matrice[N][M];
    int i,j,n;
    int L = -1;

    int tempdiff, base, flag, sum;
    int globalflag = 0;

    do {
        scanf("%d", &L);
    } while (L < 0 && L > N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    if (L >= 3) {

        
    }
    else {
        globalflag = 1;
    }

    if (globalflag == 1) {
        printf("OK\n");
    } else {
        printf("KO\n");
    }

    return 0;
}

