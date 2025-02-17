/*Scrivere un programma che dato un array di interi A ed un
intero x determina quante occorrenze di x sono in A.*/

#include <stdio.h>

int main () {

    int array [10] = {1,2,3,3,8,4,1,3,4,9};
    int x = 4;
    int counter = 0;

    for (int i = 0; i<10; i++) {
        if (array[i] == x) {
            counter++;
        }
    }

    printf("%d\n", counter);

    return 1;
}