#include <stdio.h>


int main () {

    int matrice [4][8] = {
        {5, 9, 2, 4, 1, 7, 2, 4},
        {3, 5, 6, 2, 5, 6, 1, 2},
        {1, 3, 4, 7, 8, 8, 3, 0},
        {1, 3, 5, 6, 7, 8, 2, 1}
    };
    int i,j, k, h, flag;
    int dominanti = 0;

    // Esegue su tutte le righe tranne l'ultima
    for (i = 0; i < 3; i++) {

        // Esegue su tutte le colonne tranne l'ultima
        for (j = 0; j < 7; j++) {

            flag = 0;

            // Nella colonna successiva a j
            // per ogni riga successiva a i
            // Nota che itero sulle righe da h+1 fino ad h = 3, quindi h < 4
            for (h = i+1; h < 4 && flag == 0; h++) {

                if (matrice[h][j+1] >= matrice[i][j]) {
                    flag = 1;
                }

            }

            // Stampa il numero dominante
            if (flag == 0) {
                printf("%d ", matrice[i][j]);
            }

        }
    }

    return 1;
}