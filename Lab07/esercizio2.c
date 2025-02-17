/*Scrivere un programma che data una matrice quadrata
int M[D][D] calcoli la sua trasposta int N[D][D].
 NB: N è la trasposta di M se N[i][j]=M[j][i] per ogni
j [0,D-1] e i [0,D-1]*/
#include <stdio.h>
#define D1 3
#define D2 3

int main () {

    int matrice [D1][D2] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int trasposta [D1][D2];

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            trasposta[i][j] = matrice[j][i];
        }
    }

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            printf("%d ", trasposta[i][j]);
        }
        printf("\n");
    }


    return 1;
}