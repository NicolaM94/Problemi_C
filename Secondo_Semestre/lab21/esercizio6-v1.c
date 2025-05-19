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
#include <string.h>
#define STR_L 8

typedef struct rilevamento_ {
    int piano;
    char ora[STR_L+1];
    int temperatura;
    struct rilevamento_* next; 
} rilevamento_t;


void printList (rilevamento_t *head, int piano) {
    rilevamento_t *sp;
    sp = head;
    head = head -> next;
    while (head -> next != NULL) {
        if (head -> piano == piano) {
            if (head -> temperatura < 23 && sp -> temperatura >= 23) {
                sp = head;
            } else if (head -> temperatura >= 23 && sp -> temperatura < 23) {
                printf("%d %s -> %s\n", head -> piano, sp -> ora, head -> ora);
            }
        }
        head = head -> next;
    }
}

rilevamento_t * appendList (rilevamento_t *head, rilevamento_t *newNode) {
    rilevamento_t *temp;
    if (head == NULL) {
        return newNode;
    } else {
        temp = head;
        while (head -> next != NULL) {
            head = head -> next;
        }
        head -> next = newNode;
    }
    return temp;
}


int main () {

    rilevamento_t *listaRilevamenti = NULL;
    rilevamento_t *tempRelev;
    int piano, temperatura;
    char ora [STR_L+1];

    do {
        puts("Inserisci piano");
        scanf("%d", &piano);
        
        if (piano != -1) {

            puts("Inserisci ora: ");
            scanf("%s", ora);
            ora[8] = '\0';
            puts("Inserisci temperatura");
            scanf("%d", &temperatura);

            tempRelev = (rilevamento_t *) malloc(sizeof(rilevamento_t));
            if (tempRelev == NULL) {
                perror("Malloc non riuscito: ");
                exit(-1);
            }
            tempRelev -> piano = piano;
            strcpy(tempRelev -> ora, ora);
            tempRelev -> temperatura = temperatura;

            listaRilevamenti = appendList(listaRilevamenti, tempRelev);
        }
    } while (piano != -1);

    printf("\n\n");
    puts("Inserisci il piano da visualizzare: ");
    scanf("%d", &piano);

    printList(listaRilevamenti, piano);

}