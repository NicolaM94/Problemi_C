/* Modificare il codice
dell'esercizio 6 del laboratorio 14 (dizionario italiano-
inglese con struct) utilizzando una funzione per
ciascun valore della variabile scelta. In particolare,
generare le seguenti funzioni:
– void inserisci_parola(dizionario_t *dizionario)
– void visualizza_dizionario(dizionario_t
*dizionario)
– void cancella_parola(dizionario_t *dizionario)
– void ricerca_parola(dizionario_t *dizionario)
Gestire in modo opportuno i riferimenti al dizionario
all'interno di ciascuna funzione, in modo che le
funzioni modifichino il dizionario passato dal main */

#include <stdio.h>
#include <string.h>
#define DIM 30

typedef struct {
    char parola [DIM+1];
    char word [DIM+1];
} trad_t;

typedef struct {
    trad_t trad [100];
} dict_t;


void insertWord (dict_t *dict, int *inserted) {
    if (*inserted == 99) {
        puts("Non c'è più spazio nel dizionario! Elimina una parola prima.");
    } else {
        puts("Inserisci la parola in italiano:");
        scanf("%s\0", (*dict).trad[*inserted].parola);
        puts("Inserisci la traduzione in inglese:");
        scanf("%s\0", (*dict).trad[*inserted].word);
        *inserted = *inserted + 1;
    }
}

void printDict (dict_t dict, int inserted) {
    int i;
    if (inserted != 0) {
        for (i = 0; i < inserted; i++) {
            printf("%d. %s  %s\n",i, dict.trad[i].parola, dict.trad[i].word);
        }
    }
}

void removeWord (dict_t *dict, int *inserted) {
    int indexToRemove;
    int i;
    puts("Inserisci l'indice da rimuovere: ");
    scanf("%d", &indexToRemove);

    for (i = indexToRemove; i <= (*inserted)-1; i++) {
        (*dict).trad[i] = (*dict).trad[i+1];
    }
    *inserted = *inserted-1;
}

void searchWord (dict_t dict, int inserted) {
    int i;
    char filter [DIM+1];
    
    puts("Inserisci la parola da ricercare: ");
    scanf("%s\0", filter);
    for (i = 0; i < inserted; i++) {
        if (strcmp(filter, dict.trad[i].parola) == 0) {
            printf("%d. %s  %s\n", i, filter, dict.trad[i].word);
        }
    }
}

void main () {

    dict_t dict;
    int inserted = 0;
    int quitflag = 0;
    int command;

    do {
        puts("\nEcco i comandi disponibili: ");
        puts("1. inserisci una parola");
        puts("2. visualizza il dizionario");
        puts("3. cancella una parola");
        puts("4. ricerca una parola italiana");
        puts("5. esci");

        scanf("%d", &command);

        if (command == 1) {
            insertWord(&dict, &inserted);
        } else if (command == 2) {
            printDict(dict, inserted);
        } else if (command == 3) {
            removeWord(&dict, &inserted);
        } else if (command == 4) {
            searchWord(dict, inserted);
        } else if (command == 5) {
            quitflag = 1;
        } else {
            puts("Comando non riconosciuto");
        }





























    } while (quitflag == 0);


}