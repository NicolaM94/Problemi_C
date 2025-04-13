/*Scrivere un sottoprogramma che riceve due numeri
interi positivi e calcola l'elevamento a potenza del
primo rispetto al secondo.*/

/*Scrivere un sottoprogramma che calcola la radice
ennesima intera di un numero intero positivo. Il
sottoprogramma prende come parametri il numero, il
grado della radice, e una variabile, passata per
indirizzo, in cui memorizzare la radice intera. Il
sottoprogramma restituisce 1 se la radice intera è
precisa, in alternativa 0. Scrivere un programma che
utilizza tale sottoprogramma per calcolare la radice
ennesima intera di un numero e di un grado chiesti
all'utente, e ne visualizza il risultato. Per il calcolo
della radice ennesima si usi la funzione potenza
definita al punto precedente.*/

#include <stdio.h>

int potenza (int n, int m) {
    int res = 1;
    while (m > 0) {
        res = res * n;
        m--;
    }
    return res;
}


int calcolaRadice (int base, int esponente, int *risultato) {

    int i = 0;

    while (potenza(i,esponente) <= base) {
        if (potenza(i,esponente) == base) {
            *risultato = i;
            return 1;
        }
        i++;
    }
    *risultato = i-1;
    return 0;
}

void main () {
    int n,m;
    int risultato;
    int intera;

    puts("Inserisci la base della radice: ");
    scanf("%d", &n);
    puts("Inserisci l'esponente della radice: ");
    scanf("%d", &m);
    intera = calcolaRadice(n,m,&risultato);
    printf("Radice: %d  Intera?: %d", risultato, intera);
}