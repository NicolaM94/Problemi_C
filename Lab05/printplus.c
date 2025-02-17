/*Leggere un numero naturale n e scrivere in
output un numero n di ‘+’.(Ad esempio se leggo 5
l’output sarà: +++++ )*/

#include <stdio.h>

int main () {

    int numero;

    printf("Inserisci un numero di '+' da stampare: \n");
    scanf("%d", &numero);
    
    for (int a = 0; a < numero; a++) {
        printf("+");
    }
    printf("\n");
    return 1;
}