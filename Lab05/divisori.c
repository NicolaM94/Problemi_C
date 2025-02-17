/*Scrivere un programma che ricevuto in ingresso
un numero intero positivo (correggere
l’eventuale input sbagliato) stampa a video tutti
i suoi divisori.*/

#include <stdio.h>

int main () {

    int number;

    printf("Inserisci un numero: \n");
    scanf("%d", &number);

    for (int a = 1; a <= number; a++) {
        if (number%a==0) {
            printf("%d ", a);
        }
    }
    
    return 1;
}