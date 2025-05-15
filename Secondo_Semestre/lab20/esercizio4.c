/*Sia data una lista contenente almeno due elementi
ed i cui nodi sono definiti tramite la seguente struttura
C:
    struct nodo{
        int valore;
        struct nodo *next;
    };
Si scriva una funzione C che ricevendo in ingresso un
puntatore alla lista modifichi la stessa, memorizzando
nell’ultimo nodo il prodotto del penultimo ed ultimo
nodo, nel penultimo il prodotto del terzultimo e del
penultimo e così via. Il primo nodo non deve essere
modificato (perché non ha un precedente).
Ad esempio, una lista contenente la sequenza di interi
4 6 2 3 9 verrà modificata dalla funzione nella lista
4 24 12 6 27.*/

/* Implementazione ricorsiva */

#include <stdlib.h>
#include <stdio.h>

struct nodo {
    int valore;
    struct nodo *next;
};

int addNode (struct nodo *root, int value) {
    
    struct nodo *new;
    
    while (root -> next != NULL) {
        root = root -> next;
    }

    new = (struct nodo *) malloc(sizeof(struct nodo *));

    new -> valore = value;
    new -> next = NULL;
    root -> next = new;
    return 0;
}

void printList (struct nodo *root) {
    while (root != NULL) {
        printf("%d ", root -> valore);
        root = root -> next;
    }
    printf("\n");
}

struct nodo * modificaLista (struct nodo *current) {
    struct nodo *next;
    if (current -> next == NULL) {
        return NULL;
    } else {
        modificaLista(current -> next);
        current -> next -> valore = current -> next -> valore * current -> valore;
    }

}

int main () {

    struct nodo a;
    a.valore = 4;
    a.next = NULL;

    printList(&a);
    addNode(&a, 6);
    addNode(&a, 2);
    addNode(&a, 3);
    addNode(&a, 9);
    printList(&a);

    modificaLista(&a);
    printList(&a);

}