/*Scrivere un programma che, chiesti all'utente due
numeri interi positivi a e b comunica all'utente se
si tratta di una coppia di numeri affiatati oppure no.
Definiamo due numeri affiatati se sono diversi tra
loro e la loro somma è pari al prodotto delle cifre che
li compongono. Ad esempio (14, 34) e (63, 81) sono
coppie di numeri affiatati perché
14 + 34 = 1 x 4 x 3 x 4 = 48
63 + 81 = 6 x 3 x 8 x 1 = 144*/

#include <stdio.h>

int main () {

    int a = 0;
    int b = 0;
    int sum;
    int prod = 1;
    int temp;

    while (a <= 0 || b <= 0) {
        printf("Inserisci due numeri interi positivi: \n");
        scanf("%d %d", &a, &b);
    }

    sum = a+b;

    while (a > 0) {
        temp = a%10;
        prod *= temp;
        a = a/10;
    }
    while (b > 0) {
        temp = b%10;
        prod *= temp;
        b = b/10;
    }


    if (sum == prod) {
        printf("Sono affiatati.\n");
    } else {
        printf("Non sono affiatati.\n");
    }







    return 1;
}