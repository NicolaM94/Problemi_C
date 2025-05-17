/*Sia data una lista contenente almeno due
elementi ed i cui nodi sono definiti tramite la
seguente struttura C:
struct nodo{
int valore;
struct nodo *next;
};
Si scriva un sottoprogramma cancella che preso il
puntatore alla testa della lista e un intero num,
cancella tutti i nodi che contengono come valore
num.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node_t;

void printList (Node_t *root) {
    while (root != NULL) {
        printf("%d ", root -> value);
        root = root -> next;
    }
    printf("\n");
}

void appendNode (Node_t *root, int newValue) {

    Node_t *newNode = (Node_t *) malloc(sizeof(Node_t));
    newNode -> value = newValue;
    newNode -> next = NULL;

    while (root -> next != NULL) {
        root = root -> next;
    }
    root -> next = newNode;
}

Node_t * cancella (Node_t *root, int valueToRemove) {

    Node_t *prevHead = root;

    if (prevHead -> next == NULL && prevHead -> value == valueToRemove) {
        return NULL;
    }

    while (root -> next != NULL) {
        if (root -> next -> value == valueToRemove) {
            root -> next = root -> next -> next;
        } else {
            root = root -> next;
        }
    }

    if (prevHead -> value == valueToRemove) {
        return prevHead -> next;
    }
    return prevHead;

}


int main () {

    Node_t *head;

    head = (Node_t *) malloc( sizeof(Node_t) );
    head -> value = 1;
    head -> next = NULL;

    
    appendNode(head, 2);
    appendNode(head, 3);
    appendNode(head, 1);
    appendNode(head, 4);
    appendNode(head, 1);

    printList(head);
    head = cancella(head, 1);
    printList(head);
}
