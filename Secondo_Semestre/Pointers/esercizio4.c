/*Scrivere un sottoprogramma che riceve due numeri
interi positivi e calcola l'elevamento a potenza del
primo rispetto al secondo*/

#include <stdio.h>


void potenza (int *numeroUno, int numeroDue) {
    while (numeroDue > 1) {
        *numeroUno = *numeroUno * *numeroUno;
        numeroDue--;
    }
}

void main () {

    int numeroUno, numeroDue;

    printf("Inserisci la base e l'esponente: \n");
    scanf("%d %d", &numeroUno, &numeroDue);
    potenza(&numeroUno, numeroDue);
    printf("%d", numeroUno);

}