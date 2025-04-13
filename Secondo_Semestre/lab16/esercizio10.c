#include <stdio.h>

int leggi () {
    int res;
    do {
        scanf("%d", &res);
    } while (res < 0);
    return res;
}

void stampa (int numero) {

    char *array[10] = {"zero", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove"};
    if (numero == 0) {
        printf("");
    } else {
        stampa(numero/10);
        printf("%s ", array[numero%10]);
    }

}

void main () {

    int numero;

    puts("Inserisci il numero da stampare: ");
    numero = leggi();
    stampa(numero);
}