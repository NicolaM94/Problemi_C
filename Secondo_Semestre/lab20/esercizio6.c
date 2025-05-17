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
#include <stdlib.h>
#include <errno.h>

int stampaAbaco (int n) {
    int i = 0;
    if (n == 0) {
        return 0;
    } else {
        stampaAbaco(n/10);
        for (i = 0; i < n%10; i++) {
            printf("o");
            
        }
        printf(" %d\n", n%10);
    }
}


int main () {

    stampaAbaco(1345);

    exit(0);
}