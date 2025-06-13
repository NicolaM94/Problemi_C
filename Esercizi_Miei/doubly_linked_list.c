#include "doubly_linked_list.h"

Node_t * add_node (Node_t * head, int value) {

    Node_t * nn;
    Node_t * headref;

    nn = (Node_t *) malloc(sizeof(Node_t));
    nn -> prev = NULL;
    nn -> value = value;
    nn -> next = NULL;

    if (head == NULL) {
        return nn;
    } else {
        headref = head;
        while (head -> next != NULL) {
            head = head -> next;
        }
        head -> next = nn;
        nn -> prev = head;
    }
    return headref;
}

Node_t * remove_node (Node_t *, int);
Node_t * remove_index_node(Node_t *, int);
Node_t * insert_node (Node_t *, int);
