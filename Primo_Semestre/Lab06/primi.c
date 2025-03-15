/*Scrivere un programma C che memorizza in un
array di lunghezza 15 tutti i numeri primi minori
di 50 e successivamente li stampa a video.*/

#include <stdio.h>

int isPrime (int number) {
    for (int i = 2; i < number; i++) {
        if (number%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main () {

    int primi[15];
    int index = 0;
    int counter = 2;

    while (index < 15 && counter < 50) {
        if (isPrime(counter) == 1) {
            printf("%d ", counter);
            primi[index] = counter;
            index++;
        }
        counter++;
        
    }

    return 1;
}