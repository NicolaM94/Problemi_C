/*Scrivere un programma che memorizza tutte le righe di
una matrice di interi 4x6 in un unico array di interi
lungo 24.*/

#include <stdio.h>
#define D1 4
#define D2 6


int main () {

    int matrice [D1][D2] = {
        {1,4,5,2,3,6},
        {4,5,4,1,1,1},
        {7,3,2,3,4,5},
        {2,2,6,6,0,1}
    };
    int array [24];
    int counter = 0;

    for (int i = 0; i < D1; i++) {
        for (int j = 0; j < D2; j++) {
            array[counter] = matrice[i][j];
            counter++;
        }
    }

    for (int i = 0; i < 24; i++) {
        printf("%d", array[i]);
    }


    return 1;
}