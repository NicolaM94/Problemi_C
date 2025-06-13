typedef struct node {
    int value;
    node * prev;
    node * next;
} Node_t;

Node_t * add_node (Node_t *, int);
Node_t * remove_node (Node_t *, int);
Node_t * remove_index_node(Node_t *, int);
Node_t * insert_node (Node_t *, int);
