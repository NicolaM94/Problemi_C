/*Scrivere un sottoprogramma che calcola la radice
quadrata intera di un numero intero positivo. Il
sottoprogramma riceve come parametri il numero
intero ed un'altra variabile, passata per indirizzo,
in cui memorizzare la radice intera. Il
sottoprogramma restituisce 1 se la radice intera è
precisa (il numero è un quadrato perfetto), in
alternativa 0.
 Scrivere un programma che utilizza tale
sottoprogramma per stampare la radice quadrata
intera di un numero acquisito in input ed il
valore 0 o 1 in base al fatto che la radice sia
precisa o meno.
 NB: non usare la funzione sqrt!*/

#include <stdio.h>

int calcolaRadice (int numero, int *radice) {

    int i = 0;

    while (i * i <= numero) {
        if (i*i == numero) {
            *radice = i;
            return 1;
        }
        i++;
    }
    *radice = i-1;
    return 0;

}

void main () {

    int numero;
    int radice;
    int radiceIntera;

    scanf("%d", &numero);
    radiceIntera = calcolaRadice(numero, &radice);
    printf("Radice: %d  Intera?: %d", radice, radiceIntera);

}