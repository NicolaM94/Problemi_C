/*

Sia data una lista contenente almeno due elementi
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
Realizzare anche la funzione per stampare la lista.

*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct Node {
    int valore;
    struct Node *next;
};

void printLista (struct Node lista) {
    do {
        printf("%d ", lista.valore);
        lista = *(lista.next);
    } while (lista.next != NULL);
    printf("%d", lista.valore);
}

struct Node sommaNodiInTesta (struct Node *node) {

    int somma = 0;
    struct Node *temp  = node;
    struct Node new;

    while (node != NULL) {
        somma += node -> valore;
        node = node -> next;
    }

    new.valore = somma;
    new.next = temp;
    return new;
}


int main () {

    struct Node a,b,c, d;

    a.valore = 10;
    b.valore = 15;
    c.valore = 7;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printLista(a);
    d = sommaNodiInTesta(&a);
    printf("\n");
    printLista(d);

}