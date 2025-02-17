/*Scrivere un programma che dato un array di caratteri
lungo 10 (con i valori letti da standard input) lo stampa,
lo stampa invertito, sostituisce ogni vocale minuscola con
un ’*’.*/
#include <stdio.h>


int main () {

    char array[10];

    for (int i = 0; i<10; i++) {
        scanf(" %c", &array[i]);
    }

    for (int i = 0; i<10; i++) {
        printf(" %c", array[i]);
    }

    printf("\n");
    for (int i = 9; i>=0; i--) {
        printf(" %c", array[i]);
    }

    printf("\n");
    for (int i = 9; i>=0; i--) {
        if ( array[i] >= 97 && array[i] <= 122) {
            printf(" *");
        } else {
            printf(" %c", array[i]);
        }
    }
    printf("\n");

    return 1;
}