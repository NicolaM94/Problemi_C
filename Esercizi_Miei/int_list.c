/* Declarations */

typedef struct node {
    int value;
    struct node *next;
} Node_t;

Node_t * create_list(int);

void print_list(Node_t *);


/* Functions */

Node_t * create_list (int value) {
    Node_t * newNode;
    newNode = (Node_t *) malloc(sizeof(Node_t));
    if (newNode == NULL) {
        printf("errore di allocazione della memoria");
        return NULL;
    }
    newNode -> value = value;
    newNode -> next = NULL;
    return newNode;
}

void print_list (Node_t *head) {
    while (head != NULL) {
        printf("%d ", head -> value);
        head = head -> next;
    }
    printf("\n");
}

