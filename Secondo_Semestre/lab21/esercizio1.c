/*Sia data una lista contenente almeno due elementi
ed i cui nodi sono definiti tramite la seguente struttura
C:
struct nodo{
int valore;
struct nodo *next;
};
Si scriva una funzione C che ricevendo in ingresso un
puntatore alla lista modifichi la stessa, memorizzando
come primo nodo la somma dei valori di tutti i nodi
presenti nella lista.
Ad esempio, una lista contenente la sequenza di interi
4 6 2 3 9 verrà modificata dalla funzione nella lista
24 4 6 2 3 9
Realizzare anche la funzione per stampare la lista.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct Node {
    int value;
    struct Node * next;
};

void printList ( struct Node *head ) {

    while ( head != NULL ) {
        printf("%d ", head -> value);
        head = head -> next;
    }
    printf("\n");

}

void appendNode ( struct Node *head, int value ) {
    
    struct Node *newlast = (struct Node *) malloc(sizeof(struct Node));
    newlast -> value = value;
    newlast -> next = NULL;

    while (head -> next != NULL) {
        head = head -> next;
    }
    head -> next = newlast;

}

struct Node * sumIntoHead ( struct Node *head ) {

    int sum = 0;
    struct Node *newHead = (struct Node *) malloc(sizeof(struct Node));
    struct Node *prevHead = head;

    while (head != NULL) {
        sum += head -> value;
        head = head -> next;
    }

    newHead -> value = sum;
    newHead -> next = prevHead;
    return newHead;
}



int main () {

    struct Node *a;

    a = (struct Node *) malloc(sizeof(struct Node));
    a -> value = 1;
    a -> next = NULL;

    appendNode(a, 2);
    appendNode(a, 3);
    appendNode(a, 4);

    printList(a);

    a = sumIntoHead(a);
    
    printList(a);
    
}