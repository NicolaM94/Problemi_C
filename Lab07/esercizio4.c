/*Scrivere un programma che calcoli quanti elementi in
una matrice occorrono almeno due volte.*/

#include <stdio.h>
#define D1 4
#define D2 4

int main () {

    int matrice[D1][D2] = {
        {1,2,3,4},
        {1,3,1,1},
        {1,5,8,7},
        {1,3,1,1}
    };
    int counter = 0;
    int globalCounter = 0;


    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            counter = 1;
            for (int k = j+1; k < D2; k++) {
                if (matrice[i][k] == matrice[i][j]) {
                    counter++;
                }
            }
            
            for (int k = i +1; k < D1; k++) {
                for (int p = 0; p < D2; p++) {
                    if (matrice[i][j] == matrice[k][p]) {
                        counter++;
                    }
                }
            }

            // NOTA IMPORTANTE: INCREMENTO IL GLOBAL COUNTER SOLO ALL'ULTIMA OCCORRENZA DELLE COPPIE, METTENDO COUNTER == 2
            // QUESTO PERCHÈ CONSIDERA L'1 AD ESEMPIO. C'È ALMENO UN 1 IN OGNI RIGA E IL GLOBAL COUNTER VERREBBE INCREMENTATO AD OGNI RIGA IN PRATICA SE METTESSI
            // COUNTE > 1, AD ESEMPIO.
            if (counter == 2) {
                globalCounter++;
            }
        }
    }

    printf("Ci sono %d elementi che appaiono più di una volta.\n", globalCounter);

    return 1;
}