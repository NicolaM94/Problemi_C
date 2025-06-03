/*Scrivere un programma che permetta di
visualizzare un qualsiasi numero come un
«abaco»: e.g.: 1345
o 1
ooo 3
oooo 4
ooooo 5
Il programma continua a chiedere input e a
mostrare la rappresentazione “in abaco”
all’utente fino all’inserimento di 0.
La scomposizione del numero e la stampa devono
essere eseguiti mediante funzioni ricorsive.*/

#include <stdio.h>

int stampAbaco (int numero) {
    int i;
    if (numero < 10) {
        for (i = 0; i < numero; i++) {
            printf("o");
        }
        printf("\n");
    } else {
        i = stampAbaco(numero/10);
        for (i = 0; i < numero%10; i++) {
            printf("o");
        }
        printf("\n");
    }
}

int main () {

    int input = -1;

    while (input != 0) {

        puts("Inserisci il numero da stampare come abaco: ");
        scanf("%d", &input);

        stampAbaco(input);

    }

    return 0;
}
