/*Sia data una lista i cui nodi sono definiti
tramite la seguente struttura C:

struct nodo{
int valore;
    struct nodo *next;
};
Scrivere due funzioni C RICORSIVE che ricevendo
in ingresso un puntatore alla lista: (1) stampano la
lista e (2) contano quanti multipli di 3 sono
presenti nella lista.
NB: per testare il programma scrivere la funzione
inserisci in coda per creare una lista con 10 valori.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct nodo {
    int valore;
    struct nodo *next;
} Node_t;

Node_t * addNode (Node_t * head, int value) {
    Node_t *tmp;
    if (head == NULL) {
        head = (Node_t *) malloc(sizeof(Node_t));
        head -> valore = value;
        return head;
    } else {
        tmp = head;
        while (head -> next != NULL) {
            head = head -> next;
        }
        head -> next = (Node_t *) malloc(sizeof(Node_t));
        head -> next -> valore = value;
        head -> next -> next = NULL;
        return tmp;
    }
}

void printList (Node_t *head) {
    while (head != NULL) {
        printf("%d ", head -> valore);
        head = head -> next;
    }
    printf("\n");
}

Node_t * recursivePrint (Node_t *head) {

    if (head == NULL) {
        return NULL;
    } else {
        printf("%d ", head -> valore);
        recursivePrint(head -> next);   
    }
}

int recursiveCount (Node_t *head) {
   
    if (head == NULL) {
        return 0;
    } else {
        if (head -> valore % 3 == 0) {
            return 1 + recursiveCount(head -> next);
        } else {
            return 0 + recursiveCount(head -> next);
        }
    }
}


int main () {

    Node_t *head = NULL;
    int i,input;

    for (i = 0; i < 10; i++) {
        scanf("%d", &input);
        head = addNode(head, input);
    }

    puts("Print normale: ");
    printList(head);
    puts("Print ricorsivo: ");
    recursivePrint(head);
    puts("Conta dei multipli di 3: ");
    printf("%d", recursiveCount(head));

}


