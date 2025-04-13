/*Scrivere un programma C (non scomposto in
funzioni) che acquisisce una stringa s1 di
massimo 50 caratteri e un numero intero n. Il
programma controlla se n è maggiore di zero e
minore della lunghezza della stringa e, se le
condizioni non sono verificate continua a
richiedere il valore; poi il programma crea una
nuova stringa s2 che contiene la rotazione
(spostamento) verso sinistra di s1 di n posizioni e
la visualizza. Esempio: s1="studente" e n=2 ->
s2="udentest".*/

#include <stdio.h>
#include <string.h>
#define DIM 50

void main () {

    char s1 [DIM+1];
    char s2 [DIM+1];
    int n, i;

    puts("Inserisci la stringa: ");
    fgets(s1, DIM+1, stdin);

    puts("Inserisci il numero di rotazioni: ");
    do {
        (scanf("%d", &n));
    } while (n < 0 || n > strlen(s1)-1);


    for (i = 0; i < strlen(s1)-1; i++) {
        s2[(i-n)%(strlen(s1)-1)] = s1[i];
    }
    s2[i] = '\0';
    
    puts(s2);

}
