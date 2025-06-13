#include "doubly_linked_list.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct node {
    char l;
    struct node * next;
} Lettera_t;


Lettera_t  * generalista (char *s) {

    if (*s == '\0') {
        head = (Lettera_t *) malloc(sizeof(Lettera_t));
        return head;
    }
    else {
        currentHead = generalista(s+1);
        currentHead -> next = (Lettera_t * ) malloc(sizeof(Lettera_t));
        currentHead -> next -> l = *s;
        currentHead = currentHead -> next;
        return currentHead;
    }

}


void stampalista (Lettera_t *lista) {
    while (lista != NULL) {
        printf("%c ", lista -> l);
        lista = lista -> next;
    }
}





int main () {

    char stringa[]= "ciaone";
    Lettera_t *head = NULL;

    head = generalista(stringa);
    stampalista(head);

}