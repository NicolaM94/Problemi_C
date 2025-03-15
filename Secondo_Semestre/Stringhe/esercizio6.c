/*Es 6: Scrivere un programma che implementi il gioco
dell’impiccato. Il programma chiede al primo giocatore
di inserire una parola di lunghezza massima 10
caratteri. Il secondo giocatore ha a disposizione 10
tentativi per indovinare la parola. Ad ogni tentativo, il
programma chiede all’utente di inserire una lettera e
visualizza i tentativi ancora disponibili. Inoltre, viene
visualizzata la parola in modalità «nascosta» (es. «ciao»
diventa «****»); se vengono indovinate delle lettere, il
programma le visualizza nella posizione corretta (es.
se inserisco «a» la parola nascosta diventa «**a*»).
Il programma termina quando il giocatore indovina la
parola oppure quando terminano i tentativi a
disposizione.*/
#include <stdio.h>
#include <string.h>
#define DIM 10

void main () {

    char soluzione[DIM+1];
    char copia [DIM+1];
    int i,s, flag;
    char lettera;
    int solved = 0;
    int indovinate = 0;

    printf("Giocatore 1, inserisci la parola da trovare: ");

    fgets(soluzione, DIM+1, stdin);
   
    for (i = 0; i < strlen(soluzione); i++) {
        copia[i] = '*';
    }
    copia[i-1] = '\0';

    for (i = 0; i < 10 && solved == 0; i++) {

        printf("Giocatore 2, inserisci una lettera e prova ad indovinare! Hai ancora %d tentativi: ", DIM - i);

        scanf(" %c", &lettera);

        for (s = 0; s < strlen(soluzione); s++) {
            if (lettera == soluzione[s]) {
                copia[s] = lettera;
            }
        }
        printf("%s\n", copia);

        solved = 1;
        for (s = 0; s < strlen(soluzione)-1; s++) {
            if (soluzione[s] != copia[s]) {
                solved = 0; 
            }
        }
    }

    if (solved == 1) {
        printf("Congratulazioni hai vinto!");
    } else {
        printf("Hai perso! La parola era: %s", soluzione);
    }

}