/*Scrivere una funzione sort che ordina 3 interi in
ordine crescente. La funzione non deve utilizzare
un array ma 3 puntatori.*/

#include <stdio.h>

int sort (int *a, int *b, int *c) {
    int temp;
    int max;

    if (*a > *b) {
        temp = *b;
        *b = *a;
        *a = temp;
    } 
    if (*b > *c) {
        temp = *c;
        *c = *b;
        *b = temp;
    }

    if (*a > *b) {
            temp = *b;
            *b = *a;
            *a = temp;
        }
}


void main () {

    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);
    sort(&a, &b, &c);
    printf("%d %d %d", a, b, c);

}