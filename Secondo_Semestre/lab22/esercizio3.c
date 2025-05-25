/*
Si completi il file (skeleton) ESI_20062018_A_1.c di modo che:

la funzione crea_lista riceve in input una s, converte la
s in una lista di caratteri e restituisce il puntatore alla testa
della lista. La struttura struct node_t deve essere utilizzata come
definizione dei nodi della lista.

la funzione stampa_lista stampa la lista in input.

la funzione raddoppia_vocali riceve in input una lista (il
puntatore al primo nodo) e raddoppia i nodi della lista che
contengono delle vocali.

L’output del programma é il seguente:
la mia s
laa miiaa striingaa

NOTA: Lo studente NON deve gestire la deallocazione della lista. */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct node {
    char letter;
    struct node *next;
} node_t;

int isVocale (char l) {
    char array[10] = {'A','E','I','O','U','a','e','i','o','u'};
    int i;

    for (i = 0; i < 10; i++) {
        if (l == array[i]) {
            return 1;
        }
    }
    return 0;
}

void stampa_lista (node_t *head) {
    while (head != NULL) {
        printf("%c", head -> letter);
        head = head -> next;
    }
    printf("\n");
}

node_t * crea_lista (char parola[]) {
    node_t *head = NULL;
    node_t *tail = NULL;
    node_t *newNode = NULL;
    int p;

    for (p = 0; parola[p] != '\0'; p++) {
        newNode = (node_t *) malloc(sizeof(node_t));
        newNode -> letter = parola[p];
        newNode -> next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = tail -> next;
        }
    }
    return head;

}

node_t * raddoppia_vocali (node_t *head) {

    node_t *headref = head;
    node_t *tmp = NULL;

    while (head != NULL) {

        if (isVocale(head -> letter) == 1) {
            printf("Triggered %c \n", head -> letter);
           
            tmp = head -> next;

            head -> next = (node_t *)malloc(sizeof(node_t));
            head -> next -> letter = head -> letter;
            head -> next -> next = tmp;
            head -> next = tmp;

        } else {
            head = head -> next;
        }
        
    }

    return headref;
}

int main () {

    node_t *lista;
    char parola[] = "mammalucco";
    lista = crea_lista(parola);

    stampa_lista(lista);

    lista = raddoppia_vocali(lista);

    stampa_lista(lista);

}