/*Sia data una lista contenente almeno due elementi ed
i cui nodi sono definiti tramite la seguente struttura C:
struct nodo{
int valore;
struct nodo *next;
};
Si scriva una funzione C che ricevendo in ingresso un
puntatore alla lista modifichi la stessa, memorizzando
nell’ultimo nodo la somma dei valori di tutti i nodi presenti
nella lista.
Ad esempio, una lista contenente la sequenza di interi
4 6 2 3 9 verrà modificata dalla funzione nella lista 4 6 2 3
9 24
Realizzare anche la funzione per stampare la lista.*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

void printList (struct Node *curr) {
   
    while ( curr != NULL) {
        printf("%d ", curr -> value);
        curr = curr -> next; 
    }
    printf("\n");
}

struct Node * sumInLastNode (struct Node *root) {
    
    struct Node *cp = root;
    struct Node *prec = NULL;
    struct Node *lastNode;
    int sum = 0;

    while (root != NULL) {
        sum += root -> value;
        prec = root;
        root = root -> next;
    }

    lastNode = (struct Node *) malloc(sizeof(struct Node *));
    (*lastNode).value = sum;
    (*lastNode).next = NULL;
    prec -> next = lastNode;
    return cp;
}

int main () {

    struct Node a, b, c;
    
    a.value = 10;
    b.value = 14;
    c.value = 18;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printList(&a);
    sumInLastNode(&a);
    printList(&a);

}