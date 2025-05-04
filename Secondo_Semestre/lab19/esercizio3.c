/*Scrivere una funzione ricorsiva che somma gli elementi di
valore dispari in un array di dimensione dim (dim pari a 10)*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int sommaArray(int *a, int dim) {

    if (dim == 0) {
        return 0;
    } else {
        return *a + sommaArray(a+1, dim-1);
    }
}

int main () {

    int array[DIM] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d", sommaArray(array, DIM));

    return 0;
}