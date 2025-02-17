/*Scrivere un programma in C che chiede all’utente un
carattere dell’alfabeto minuscolo (assumere non ci
siano errori in inserimento). Il programma calcola e
visualizza il corrispondente carattere maiuscolo.*/

#include <stdio.h>

int main () {

    char lettera;

    scanf("%c", &lettera);

    printf("%c", lettera-32);

    return 1;
}