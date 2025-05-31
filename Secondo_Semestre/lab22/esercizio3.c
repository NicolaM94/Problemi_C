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
    char value;
    struct node *next;
} node_t;

int isvocale (char l) {
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
        return 1;
    }
    return 0;
}

void stampa_lista (node_t *s) {
    while (s != NULL) {
        printf("%c", s -> value);
        s = s -> next;
    }
    printf("\n");
}

node_t * aggiungi_nodo (node_t *head, char value) {

    node_t * newnode;
    node_t * headref;

    newnode = (node_t *)malloc(sizeof(node_t));
    newnode -> value = value;
    newnode -> next = NULL;

    if (head == NULL) {
        return newnode;
    }
    headref = head;
    while (head -> next != NULL) {
        head = head -> next;
    }
    head -> next = newnode;
    return headref;
}

node_t * raddoppia_vocali (node_t *head) {

    node_t *newnode;
    node_t *headref;

    headref = head;
    while (head!= NULL) {
        if (isvocale(head -> value) == 1) {
            newnode = (node_t *)malloc(sizeof(node_t));
            newnode -> value = head -> value;
            newnode -> next = head -> next;
            head -> next = newnode;
            head = head -> next -> next;
        } else {
            head = head -> next;
        }
    }
    return headref;
}




int main () {

    node_t *head = NULL;
    char stringa[] = "la mia stringa";
    int i;

    for (i = 0; stringa[i] != '\0'; i++) {
        head = aggiungi_nodo(head, stringa[i]);
        
    }

    stampa_lista(head);

    head = raddoppia_vocali(head);

    stampa_lista(head);

    


}