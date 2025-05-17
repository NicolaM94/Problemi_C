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

void printList (struct node *root) {
    while (root != NULL) {
        printf("%d ", root -> value);
        root = root -> next;
    }
    printf("\n");
}

struct node * removeEvenNodes (struct node *root) {

    struct node *tempHead = NULL;
    struct node *tempBin = NULL;
        
    tempHead = root;
    while (root -> next != NULL) {
        if (root -> next -> value %2 == 0) {
            tempBin = root -> next;
            root -> next = root -> next -> next;
            free(tempBin);
        } else {
            root = root -> next;
        }
    }
    if (tempHead -> value % 2 == 0) {
        tempHead = tempHead -> next;
    }
    return tempHead;
}

void addNode (struct node *head, int value) {
    
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode -> value = value;
    newNode -> next = NULL;

    while (head -> next != NULL) {
        head = head -> next;
    }
    head -> next = newNode;    
}

int main () {

    struct node testa;
    testa.value = 4;
    testa.next = NULL;

    printList(&testa);

    addNode(&testa, 6);
    addNode(&testa, 2);
    addNode(&testa, 3);
    addNode(&testa, 9);

    printList(&testa);

    testa = *removeEvenNodes(&testa);
    printList(&testa);

}