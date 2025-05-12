/*Prove pratiche facili*/


#include <stdio.h>


struct Node {
    char carattere;
    struct Node *next;
};


void printLista (struct Node nodo_corrente) {

    while (nodo_corrente.next != NULL) {
        printf("%c", nodo_corrente.carattere);
        nodo_corrente = *(nodo_corrente.next);
    }
    printf("%c\n", nodo_corrente.carattere);
}

int main () {
    
    struct Node *a,
    struct Node *b;
    struct Node *c;
   ;



    a.value = 'm';
    b.value = 'a';
    c.value = 'm';

    a.next = b;
    b.next = c;
    c.next = NULL;
    
    



}