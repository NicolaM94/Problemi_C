/*Scrivere un programma che calcoli il massimo comun
divisore e il minimo comune multiplo di due numeri inseriti
dall’utente. Entrambi i numeri inseriti devono essere
maggiori di zero.*/

#include <stdio.h>

int main () {

    int a = -1;
    int b = -1;
    int mcm = -1;
    int mcd = -1;
    int max, min;
    do {
        scanf("%d %d", &a, &b);
    } while (a < 0 && b < 0);


    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    //MCM
    if (max%min==0) {
        mcm = max;
    }
    else {
        mcm = max + 1;
        while (mcm%a != 0 || mcm%b != 0) {
            mcm++;
        }
    }
    printf("MCM: %d\n", mcm);

    //mcd
    mcd = 1;
    for (int n = min; n > 1; n--) {
        if (max%n==0 && min%n==0) {
            mcd = n;
        }
    }
    printf("MCD: %d\n", mcd);

    return 1;
}