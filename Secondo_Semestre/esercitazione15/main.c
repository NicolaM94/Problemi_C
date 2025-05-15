#include <stdio.h>
#include <stdlib.h>

int main () {

    int matrice;
    int i,j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", matrice[i][j]);
        }
    }



}