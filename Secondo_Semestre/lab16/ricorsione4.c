/* Si scriva un programma C che calcoli il
quoziente della divisione tra interi x e y usando
una funzione ricorsiva.
 Caso base: x < y, allora il quoziente è zero.
 Passo ricorsivo: il quozionte è 1 + il quoziente della
divisione (x-y)/y.
Il programma dovrà contenere anche una
funzione leggi() che richiede all’utente un intero
non negativo (controllare l’input). Tale funzione
sarà chiamata due volte all’interno della
funzione main() per inizializzare x e y. */

#include <stdio.h>

int quoziente (int x, int y) {
    if (x < y) {
        return 0;
    } else {
        return 1 + (x-y)/y;
    }
}

void leggi (int *n) {
    do {
        scanf("%d", n);
    } while (*n < 0);
}


void main () {
    int x;
    int y;

    leggi(&x);
    leggi(&y);
    printf("%d", quoziente(x,y));
}