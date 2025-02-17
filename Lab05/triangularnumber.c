/*Si definisce triangolare un numero costituito
dalla somma dei primi N numeri interi positivi
per un certo N. Esempio: dato N=4, il numero
triangolare Q è 10 (Q=1+2+3+4). Scrivere un
programma che riceva dall’utente un numero
intero positivo e stampi a video se è o meno
triangolare (ossia se può essere scritto come
somma dei primi N interi consecutivi).*/

#include <stdio.h>


int main () {

    int input;
    int sum = 0;
    int counter = 0;

    printf("Inserisci un numero: \n");
    scanf("%d", &input);


    // Sarebbe più semplice verificare il delta di n^2+n-2k per k input, ma non avendo il pacchetto math per la radice...
    while (sum < input) {
        sum += counter;
        counter++;
    }

    if (sum > input) {
        printf("Non è un numero triangolare.\n");
    } else {
        printf("E' un numero triangolare.\n");
    }




    return 1;
}