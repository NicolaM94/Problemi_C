/*Definire la funzione ricorsiva
int cifre(int)
che restituisce il numero di cifre del numero >=0 passato
come parametro.*/

#include <stdio.h>


int cifre (int numero) {
    if (numero <= 10) {
        return 1;
    } else {
        return 1+cifre(numero/10);
    }
}

int main () {

    int numero;
    scanf("%d", &numero);
    printf("Il numero %d ha %d cifre\n", numero, cifre(numero));
}