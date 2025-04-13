/*Scrivere una funzione sort che ordina 3 interi in
ordine crescente. La funzione non deve utilizzare
un array ma 3 puntatori.
 La funzione deve essere richiamata dalla
funzione main, la quale si occupa anche di
richiedere i tre interi all’utente e stampare il
risultato.*/

#include <stdio.h>


void sort (int *a, int *b, int *c) {
    int temp;

    // Verifico se a > b
    if (*a > *b) { 
        temp = *a;
        *a = *b;
        *b = temp;
    }

    // Verifico se a > c
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    // Verifico se b > c
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

}


int main () {

    int a, b ,c;

    scanf("%d %d %d", &a, &b, &c);

    sort(&a, &b, &c);

    printf("%d %d %d", a, b, c);

    return 0;

}