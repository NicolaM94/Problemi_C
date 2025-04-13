/*Scrivere una funzione ricorsiva
potenza(int base, int esp) che riceve due parametri
e calcola l’elevamento a potenza (nel caso di
esponente positivo).*/

#include <stdio.h>

int potenza (int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * potenza(a,b-1);
    }
}

void main () {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", potenza(a,b));

}