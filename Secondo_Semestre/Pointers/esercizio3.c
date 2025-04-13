/*Scrivere un sottoprogramma che calcola la radice
quadrata intera di un numero intero positivo. Il
sottoprogramma riceve come parametri il numero
intero ed un'altra variabile, passata per indirizzo,
in cui memorizzare la radice intera. Il
sottoprogramma restituisce 1 se la radice intera è
precisa (il numero è un quadrato perfetto), in
alternativa 0.*/

#include <stdio.h>

int radice (int numero, int *radix) {

    int i;

    if (numero == 0) {
        *radix = 0;
        return 1;
    }

    if (numero == 1) {
        *radix = 1;
        return 1;
    }
    
    for (i = 1; i < numero; i++) {
        if (i*i == numero) {
            *radix = i;
            return 1;
        } else if (i*i > numero) {
            *radix = i-1;
            return 0;
        }
    }

}

void main () {

    int numero;
    int radix;
    int precision;

    printf("Inserisci il numero da calcolare: \n");
    scanf("%d", &numero);
    precision = radice(numero, &radix);
    printf("Radice intera precisa: %d  Intera? (1: si, 0: no): %d", radix, precision);

}