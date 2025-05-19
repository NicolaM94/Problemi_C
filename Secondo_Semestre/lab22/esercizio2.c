/*
Si consideri una lista dinamica di interi, i cui
elementi sono del tipo definito come di seguito riportato:

typedef struct El {
    int dato1;
    int dato2;
    struct El *next;
} ELEMENTO;

Si codifichi in C le funzioni contamultipli e multiplo. La
funzione contamultipli riceve come parametro la testa
della lista e restituisce il numero di elementi della lista
che hanno il primo valore numerico (dato1) multiplo del
secondo (dato2). Se la lista è vuota, la funzione
restituisce il valore -1.
Per verificare se un valore intero è multiplo di un altro
la funzione deve richiamare la funzione ricorsiva
multiplo definita dallo studente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

typedef struct El {
    int dato1;
    int dato2;
    struct El *next;
} ELEMENTO_t;

ELEMENTO_t * addNode (ELEMENTO_t *head, int dato1, int dato2) {
    ELEMENTO_t *tmp;
    if (head == NULL) {
        head = (ELEMENTO_t *) malloc(sizeof(ELEMENTO_t));
        if (head == NULL) {
            perror("Errore di allocazione memoria");
            exit(-1);
        }
        return head;
    } else {
        tmp = head;
        while (head -> next != NULL) {
            head = head -> next;
        }
        head -> next = (ELEMENTO_t *) malloc(sizeof(ELEMENTO_t));
        if (head -> next == NULL) {
            perror("Errore di allocazione memoria");
            exit(-1);
        }
        head -> next -> dato1 = dato1;
        head -> next -> dato2 = dato2;
        head -> next -> next = NULL;
        return tmp;
    }
}

void printList(ELEMENTO_t *head) {
    while (head != NULL) {
        printf("%d %d\n", head -> dato1, head -> dato2);
        head = head -> next;
    }
    printf("\n");
}


int main (int argc, char *argv[]) {

    ELEMENTO_t *testa = NULL;
    int i, input1, input2;

    for (i = 0; i < 10; i++) {
        scanf("%d %d", &input1, &input2);
        testa = addNode(testa, input1, input2);
    }

    printList(testa);




    exit(0);
}