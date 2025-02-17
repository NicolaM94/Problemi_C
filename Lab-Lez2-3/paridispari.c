/*Scrivere un programma che, acquisito un valore
intero da utente, stampi a video 0 se il valore è pari,
1 se è dispari (solo con i costrutti visti a lezione).*/

#include <stdio.h>

int main () {

    int input;

    printf("Inserisci il numero per sapere se è pari: \n");
    scanf("%d", &input);

    printf("%d\n", input%2==1);

    return 1;
}