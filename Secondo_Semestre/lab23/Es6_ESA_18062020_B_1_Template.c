/**
 * Es6: Programma per la gestione di una lista concatenata di numeri interi, es. 3 -> 6 -> 10 -> 2 -> 8.
 * In particolare:
 * la funzione left_rotate() modifica la lista, effettuando una rotazione a sinistra (LEFT) per cui il primo valore viene posto in fondo alla lista. La lista dell'esempio diventa: 6 -> 10 -> 2 -> 8 -> 3.
 * la funzione right_rotate() modifica la lista, effettuando una rotazione a destra (RIGHT) per cui l'ultimo valore della lista viene messo davanti a tutti gli altri. La lista dell'esempio diventa: 8 -> 3 -> 6 -> 10 -> 2.
 * Se la lista è vuota o contiene un solo elemento, i sottoprogrammi preceenti non modificano la lista ricevuta in ingresso.
 *
 * @author maurizio.boscaini@univr.it
 * @version 1.0
 
Es6: Esercizio 1 File ESA 18062020 B 1.c  [11 punti] 
Completare tutte le funzioni dichiarate ma non definite nel programma ESA_18062020 B 1.c per la gestione di una lista concatenata di numeri interi, es. 
3 -> 6 -> 10 -> 2 -> 8
 
In particolare: 
la funzione left rotate() modifica la lista, effettuando una rotazione a sinistra (LEFT) per cui il primo valore viene posto in fondo alla lista. La lista dell’esempio diventa: 
                                              6 -> 10 -> 2 -> 8 -> 3
la funzione right rotate() modifica la lista, effettuando una rotazione a destra (RIGHT) per cui l’ultimo valore della lista viene messo davanti a tutti gli altri. La lista dell’esempio diventa: 
                                              8 -> 3 -> 6 -> 10 -> 2
 
Se la lista è vuota o contiene un solo elemento, i sottoprogrammi precedenti non modificano la lista ricevuta in ingresso.
 La funzione main() produce il seguente output: 
3
3 -> 6 -> 10 -> 2 -> 8
6 -> 10 -> 2 -> 8 -> 3
3 -> 6 -> 10 -> 2 -> 8
8 -> 3 -> 6 -> 10 -> 2

 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node_ {
    int value;
    struct node_ *next;
} node_t;

node_t *new_node(int n);
node_t *append(node_t *head, int value);
void println(node_t *head);
node_t *left_rotate(node_t *head);
node_t *right_rotate(node_t *head);

/*
 * Program entry point
 * Output:
 * 3
 * 3 -> 6 -> 10 -> 2 -> 8
 * 6 -> 10 -> 2 -> 8 -> 3
 * 3 -> 6 -> 10 -> 2 -> 8
 * 8 -> 3 -> 6 -> 10 -> 2
 */
int main() {
    node_t *head = NULL;

    head = append(head, 3);
    head = left_rotate(head);
    println(head);

    head = append(head, 6);
    head = append(head, 10);
    head = append(head, 2);
    head = append(head, 8);

    println(head);
    head = left_rotate(head);
    println(head);

    head = right_rotate(head);
    println(head);
    head = right_rotate(head);
    println(head);

    return 0;
}

/**
 * Creates a new node with the given value.
 * @param value value for the new node.
 * @return a pointer to the newly created node.
 */
node_t *new_node(int value) {
    node_t *node = (node_t *)malloc(sizeof(node_t));
    node->value = value;
    node->next = NULL;
    return node;
}

/**
 * Appends an element with the given value at the end of the list.
 * @param head pointer to the first node of the list.
 * @param value value for the new node.
 * @return a pointer to the first node of the list.
 */
node_t *append(node_t *head, int value) {
    node_t *new = new_node(value);

    if (head == NULL) {
        head = new;
    } else {
        node_t *current, *prev;
        current = prev = head;

        while (current) {
            prev = current;
            current = current->next;
        }
        prev->next = new;
    }

    return head;
}

/**
 * Prints a representation of the list.
 * @param list pointer to the list.
 */
void println(node_t *head) {
    node_t *current = head;

    while (current) {
        printf("%d", current->value);

        if (current->next) {
            printf(" -> ");
        }

        current = current->next;
    }
    printf("\n");
}

/**
 * Rotates the list, putting the last item at the beginning of the list (RIGHT).
 * @param list pointer to the list.
 */
node_t *right_rotate(node_t *head) {
    node_t *head_ref = head;
    node_t *prev = NULL;

    while (head -> next != NULL) {
        prev = head;
        head = head -> next;
    }
    head -> next = head_ref;
    prev -> next = NULL;
    return head;
}

/**
 * Rotates the list, putting the first item at the end of the list (LEFT).
 * @param list pointer to the list.
 */
node_t *left_rotate(node_t *head) {
   
    if (head == NULL || head -> next == NULL) {
        return head;
    }

    node_t *fvref = head;
    node_t *head_ref = head -> next;

    while (head -> next != NULL) {
        head = head -> next;
    }
    head -> next = fvref;
    fvref -> next = NULL;
    return head_ref;
    
}
