/*Scrivere un programma che realizzi il gioco Mastermind. 

Il primo giocatore inserisce 4 caratteri che corrispondono alle iniziali di 4 colori tra (r = rosso; g = giallo; v = verde, b = blu, n = nero; 
si assuma che gli utenti inseriscano sempre una lettera compresa in questo elenco).

Il secondo giocatore ha a disposizione 10 tentativi per indovinare la combinazione, inserendo a sua volta quattro caratteri ad ogni tentativo. 

Dopo ogni tentativo il programma visualizza il numero di colori corretti in posizione corretta (non vengono segnalati i colori corretti in posizione sbagliata). 

Terminati i tentativi, se il secondo giocatore non è riuscito a indovinare la sequenza, vengono visualizzati i caratteri corretti. */


#include <stdio.h>

int main () {

    char soluzione [4];
    char tentativo [4];
    int vittoria = 0;
    int counter = 0;
    int i, j;

    printf("Player 1: Inserisci quattro colori (r,g,v,b,n):\n");
    for (i = 0; i < 4; i++) {
        scanf(" %c", &soluzione[i]);
    }

    
    for (i = 0; i < 10 && vittoria == 0; i++) {
        printf("Player 2: inserisci quattro colori (r,g,v,b,n):\n");
        for (j = 0; j < 4; j++) {
            scanf(" %c", &tentativo[j]);
        }
        counter = 0;
        for (j = 0; j < 4; j++) {
            if (soluzione[j] == tentativo[j]) {
                counter++;
            }
        }
        printf("Colori corretti in posizione corretta : %d\n", counter);
        if (counter == 4) {
            vittoria = 1;
        }
    }

    if (vittoria == 1) {
        printf("Player 2 vince:");
        for (i = 0; i < 4; i++) {
            printf(" %c", soluzione[i]);
        }
    } else {
        printf("Player 1 vince; la seq. corretta era");
        for (i = 0; i < 4; i++) {
            printf(" %c", soluzione[i]);
        }
    }


    return 1;
}
