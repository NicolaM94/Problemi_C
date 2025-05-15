/*Sia data una lista contenente almeno due elementi
ed i cui nodi sono definiti tramite la seguente struttura
C:
struct nodo{
int valore;
struct nodo *next;
};
Si scriva una funzione C che ricevendo in ingresso un
puntatore alla lista modifichi la stessa, cancellando tutti
i nodi che hanno valore numerico pari.
Ad esempio, una lista contenente la sequenza di interi
4 6 2 3 9 verrà modificata dalla funzione nella lista 3 9
Realizzare anche la funzione per stampare la lista.*/

#include <stdio.h>
#include <stdlib.h>


struct node {
    int value;
    struct node *next;
};

void llprint(struct node *current) {
    while (current != NULL) {
        printf("%d ", (*current).value);
        current = current -> next;
    }
    printf("\n");
}

int addllnode (struct node *current, int value) {
    struct node *new;
    while (current -> next  != NULL) {
        current = current -> next;
    }

    new = (struct node *) malloc(sizeof(struct node *));
    new -> value = value;
    new -> next  = NULL;
    current -> next = new;
}

struct node * removeEvenNodes (struct node *current) {
    while (current -> next != NULL) {
        if
    }
}

int main () {

    struct node a;
    a.value = 4;
    a.next = NULL;

    llprint(&a);
    addllnode(&a, 6);
    addllnode(&a, 2);
    addllnode(&a, 3);
    addllnode(&a, 9);
    llprint(&a);
}