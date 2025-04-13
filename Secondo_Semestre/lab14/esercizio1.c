/*Scrivere una funzione sort che ordina 3 interi in
ordine crescente. La funzione non deve utilizzare
un array ma 3 puntatori.
 La funzione deve essere richiamata dalla
funzione main, la quale si occupa anche di
richiedere i tre interi all’utente e stampare il
risultato.*/

#include <stdio.h>

void ordina (int *a, int *b, int *c) {

    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

}

int main () {

    int a,b,c;

    scanf ("%d %d %d", &a, &b, &c);

    ordina (&a, &b, &c);

    printf("%d %d %d\n", a, b ,c);

}