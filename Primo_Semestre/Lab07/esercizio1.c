/*Scrivere un programma che data una matrice int M[D1]
[D2] ed un valore intero x inserito da tastiera calcoli
quante volte x occorre in M.*/

#include <stdio.h>
#define D1 3
#define D2 3

int main () {

    int matrice [D1][D2] = {
        {1,2,1},
        {2,1,0},
        {3,4,1}
    };
    int input;
    int counter = 0;

    scanf("%d", &input);

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            if (matrice[i][j] == input) {
                counter++;
            }
        }
    }

    printf("%d\n", counter);


    return 1;
}