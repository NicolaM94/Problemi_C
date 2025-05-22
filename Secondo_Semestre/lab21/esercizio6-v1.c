/*Si vuole realizzare un programma per la gestione di una serie di rilevamenti di temperature sui piani di un edificio. Ciascun rilevamento specifica il numero del
piano, l'ora del rilevamento (una stringa di al massimo 8 caratteri che si assume rappresenti un'ora valida) e la temperatura letta (un numero intero).
Assumendo che la struttura dati per memorizzare un rilevamento sia già definita nel seguente modo:
#define STR_L 8

typedef struct rilevamento_ {
    int piano;
    char ora[STR_L+1];
    int temperatura;
    struct rilevamento_* next; 
} rilevamento_t;

Scrivere un sottoprogramma analizza() che riceve una lista di rilevamenti ed il numero di un piano. Si assuma che i rilevamenti siano già ordinati
temporalmente. Il sottoprogramma individua gli intervalli di tempo per cui la temperatura di quel piano è stata inferiore ai 23 gradi e stampa a video
solo le ore relative alla prima e all'ultima rilevazione di ciascun intervallo separati da una freccia " -> ".
ESEMPIO: Rilevamenti:
1 10:30:00 23
2 10:35:00 21
2 11:00:00 20
1 11:20:00 23
2 11:34:00 21
2 12:30:00 24
1 12:40:00 23
2 14:30:00 21

Piano da analizzare: 2
Stampa a video:
10:35:00 -> 11:34:00
14:30:00 -> 14:30:00


Dopo aver scritto una versione del programma contenuta in un unico file
(ma con più funzioni), se ne generi un’altra suddivisa in due file:

 analisi_dati_main.c: contenente le funzioni main, inserisciInCoda,
visualizza, distruggiLista;

 analisi_dati.c: analizza, leggiFile.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct rilevamento_ {
    int piano;
    char ora[STR_L+1];
    int temperatura;
    struct rilevamento_* next; 
} rilevamento_t;

void printList (rilevamento_t *root) {
    while (root != NULL) {
        printf("%d %s %d\n", root -> piano, root -> ora, root -> temperatura);
        root =  root -> next;
    }
}

rilevamento_t * addNode (rilevamento_t *root, int piano, char *ora, int temperatura) {
    rilevamento_t *prevHead = root;
    if (root == NULL) {
        root = (rilevamento_t *) malloc(sizeof(rilevamento_t));
        root -> piano = piano;
        strcpy(root -> ora, ora);
        root -> temperatura = temperatura;
        return root;
    } else {
        while (root -> next != NULL) {
            root = root -> next;
        }
        root -> next = (rilevamento_t *) malloc (sizeof(rilevamento_t));
        root -> next -> piano = piano;
        strcpy(root -> next -> ora, ora);
        root -> next -> temperatura = temperatura;
        root -> next -> next = NULL;
        return prevHead;
    }
}



int main () {

    rilevamento_t *head = NULL;
    int floor;
    int temp;
    char *orario[]

}