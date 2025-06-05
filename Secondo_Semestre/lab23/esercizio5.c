/*Dato il seguente tipo
struct list {
    int val;
    struct list *next;
};
Definire la funzione RICORSIVA
int liste_uguali(struct list * L1, struct list * L2) che
restituisce 1 se e solo se le liste hanno lo stesso
numero di nodi, e l'i-esimo nodo della lista L1
contiene lo stesso valore (campo val) dell'i-esimo
nodo della lista L2.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} list_t;

list_t * add_node (list_t *head, int value) {
    
    list_t *new_node;
    list_t *head_ref;

    new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL) {
        printf("errore di allocazione di memoria");
        exit(-1);
    }
    new_node -> val = value;
    new_node -> next = NULL;

    if (head == NULL) {
        return new_node;
    } else {
        head_ref = head;
        while (head -> next != NULL) {
            head = head -> next;
        }
        head -> next = new_node;
        return head_ref;
    }
}

void stampa_lista (list_t *head) {
    while (head -> next != NULL) {
        printf("%d -> ", head -> val );
        head = head -> next;
    }
    printf("%d", head -> val);
    printf("\n");
}

// Segui i commenti in ordine
int liste_uguali (list_t *L1, list_t *L2) {
    // 3.   Se trovo che L1 e L2 sono entrambi null, allora sono arrivato in fondo ad entrambe senza essere mai incappato nel punto 1.
    //      di conseguenza le liste sono uguali
    if (L1 == NULL && L2 == NULL) {
        return 1;
    }
    // 1.   Se trovo che L1 != L2, ritorno 0 perchè non sono uguali
    else if (L1 -> val != L2 -> val) {
        return 0;
    } 
    // 2.   Se L1 == L2, vado avanti chiamando la funzione sui prossimi due nodi
    else {
        return liste_uguali(L1 -> next, L2 -> next);
    }
}

int main () {

    list_t *A = NULL;
    list_t *B = NULL;
    int i;

    for (i = 0; i < 10; i++) {
        A = add_node(A,i);
        B = add_node(B,i+1);

        stampa_lista(A);
        stampa_lista(B);
        printf("\n");
    }

    printf("%d", liste_uguali(A,B));

}