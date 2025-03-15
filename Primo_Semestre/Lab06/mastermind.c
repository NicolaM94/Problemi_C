/*Scrivere un programma che realizzi il gioco Mastermind. Il
primo giocatore inserisce 4 caratteri che corrispondono alle
iniziali di 4 colori tra (r = rosso; g = giallo; v = verde, b =
blu, n = nero; si assuma che gli utenti inseriscano sempre
una lettera compresa in questo elenco). Il secondo giocatore
ha a disposizione 10 tentativi per indovinare la
combinazione, inserendo a sua volta quattro caratteri ad ogni
tentativo. Dopo ogni tentativo il programma visualizza il
numero di colori corretti in posizione corretta (non vengono
segnalati i colori corretti in posizione sbagliata). Terminati i
tentativi, se il secondo giocatore non è riuscito a indovinare
la sequenza, vengono visualizzati i caratteri corretti.*/

#include <stdio.h>


int main () {

    char sol [4] = {'g','g','b','n'};
    int counter;
    int flag = 0;
    char tempArray [4];

    for (int i = 0; i<10 && flag==0; i++) {
        
        // Inserimento
        for (int j = 0; j < 4; j++) {
            scanf(" %c", &tempArray[j]);
        }

        // Verifica
        printf(">");
        counter = 0;
        for (int j = 0; j < 4; j++) {
            if (tempArray[j] == sol[j]) {
                counter++;
                printf(" %c", sol[j]);
            } else {
                printf(" *");
            }
        }
        printf("\n");
        if (counter == 4) {
            printf("Congratulazioni, hai vinto!\n");
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("Riprova la prossima volta! La sequenza era: ");
        for (int i = 0; i < 4; i++) {
            printf("%c", sol[i]);
        }
        printf("\n");
    }
    

    return 1;
}