/*Risoluzione degli esercizi dell'ultimo laboratorio:
1. data sequenza di caratteri che termina con '#',
costruire il numero base 10 con caratteri numerici
es abc5r4u7# -> 547 dacaranum.c
Formula di Horner da cifre a numero:
(7+10*(4+10*5))=547
Lo sviluppo di Horner per un numerale di 8 cifre in una
qualsiasi base b è il seguente: (c7c6c5c4c3c2c1c0)b =
c0 + b*(c1 + b*(c2 + b*(c3 + b*(c4 + b*(c5 + b*(c6 +
c7*b))))))*/


#include <stdio.h>

int main () {

    int sol = 0;
    char currentchar;
    int i;

    do {
        scanf(" %c", &currentchar);
        if (currentchar >= 48 && currentchar <= 58 && currentchar != '#') {
            sol = sol * 10 + (currentchar-48);
        }

    } while (currentchar != '#');

    printf("%d", sol);
    return 1;
}
