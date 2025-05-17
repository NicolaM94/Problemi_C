/*Sia data una lista i cui nodi sono definiti
tramite la seguente struttura C:
struct nodo{
int valore;
struct nodo *next;
};
 Si scriva la funzione prodotto che restituisce il
prodotto dei valori degli elementi contenuti nella
lista. La funzione deve ricevere come parametro
la testa della lista. Se la lista è vuota, la funzione
deve restituire il valore 1.
 SCRIVERE SIA LA VERSIONE ITERATIVA
CHE RICORSIVA*/

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int value;
    struct nodo *next;
} Node_t;

// Crea la testa della lista
Node_t * createListHead (int value) {
    Node_t *head;
    head = (Node_t *) malloc(sizeof(Node_t));
    head -> value = value;
    head -> next = NULL;
    return head;
}

// Stampa la lista
void printList (Node_t *root) {
    while (root != NULL) {
        printf("%d ", root -> value);
        root = root -> next;
    }
    printf("\n");
}

// Aggiunge un nodo sul fondo della lista
void appendNode (Node_t *root, int value) {

    Node_t *newlast = (Node_t *) malloc(sizeof(Node_t));
    newlast -> next = NULL;
    newlast -> value = value;

    while (root -> next != NULL) {
        root = root -> next;
    }
    root -> next = newlast;

}

int prodottoIterativo (Node_t *root) {
    int res = 1;
    while (root != NULL) {
        res = res * root -> value;
        root = root -> next;
    }
    return res;
}

int prodottoRicorsivo (Node_t *root) {
    
    if (root == NULL) {
        return 1;
    } else {
        return root -> value * prodottoRicorsivo(root -> next);
    }
}



int main () {

    Node_t *head;

    head = createListHead(1);
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 4);
    appendNode(head, 5);

    printList(head);

    printf("Prodotto iterativo: %d  Prodotto ricorsivo: %d", prodottoIterativo(head), prodottoRicorsivo(head));


}