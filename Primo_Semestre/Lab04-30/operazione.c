/*Scrivere un programma C che chiede all’utente
due numeri interi n1 e n2 e un carattere op
(appartenente all’insieme {‘+’,’-’,’*’,’/’}). Il
programma calcola e stampa a video il risultato
dell’operazione corrispondente a op applicata ai
numeri n1 e n2.*/

#include <stdio.h>

int main () {

    float n1, n2;
    char op;
    float result;
    int error = 0;


    printf("Inserisci due numeri interi: \n");
    scanf("%f %f", &n1, &n2);

    printf("Inserisci l'operazione da eseguire (+,-,*,/): \n");
    scanf(" %c", &op);

    if (op == '+') {
        result = n1 + n2;
    }
    else if (op == '-') {
        result = n1 - n2;
    }
    else if (op == '*') {
        result = n1 * n2;
    }
    else if (op == '/') {
        result = n1 / n2;
    }
    else {
        error = 1;
    }

    if (error == 1) {
        printf("Operazione non supportata\n");
    } else {
        printf("Il risultato di %.2f%c%.2f è %.2f\n",n1,op,n2,result);

    }

    return 1;
}