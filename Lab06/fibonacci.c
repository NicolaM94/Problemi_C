/*Scrivere un programma C che memorizza in un
array i primi 15 numeri di Fibonacci e li stampa a
video.*/

#include <stdio.h>


int main () {

    int fib [15] = {1,1};

    for (int i = 2; i < 15; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < 15; i++) {
        printf("%d ", fib[i]);
    }

    return 1;
}