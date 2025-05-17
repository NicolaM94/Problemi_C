/*Scrivere un sottoprogramma int2list che ricevuto
in ingresso un numero intero restituisce una lista in cui
ogni cifra del numero in ingresso compare tante volte
quanto il suo valore. Nel caso in cui il valore ricevuto in
ingresso sia negativo, il sottoprogramma restituisce la
lista creata a partire dalle cifre in ordine opposto. Se per
esempio il sottoprogramma riceve in ingresso l’intero
3204, il sottoprogramma restituisce la lista seguente: 3
→ 3 → 3 → 2 → 2 → 4 → 4 → 4 → 4
Se il sottoprogramma riceve in ingresso l’intero -3204, il
sottoprogramma restituisce la lista seguente: 4 → 4 → 4
→ 4 → 2 → 2 → 3 → 3 → 3
Definire un tipo di dato opportuno per la lista. Scrivere
un programma che acquisisce da riga di comando il
valore intero e chiama il sottoprogramma int2list.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node_t;

int invertInt (int n) {
    int newInt = 0;
    while (n > 0) {
        newInt = newInt * 10 + n%10;
        n = n / 10;
    }
    return newInt;
}

void printList (Node_t *start) {
    while (start -> next != NULL) {
        printf("%d ", start -> value);
        start = start -> next;
    }
    printf("\n");
}


Node_t * generateList(int n) {

    Node_t *tempStart;
    Node_t *currentNode;
    int i;

    // Mi serve un nodo dove salvare l'inizio della lista
    tempStart = (Node_t *) malloc(sizeof(Node_t));
    tempStart -> value = 0;
    // Con current node salviamo il valore del nodo corrente e mallocchiamo il prossimo
    // Vedi il for successivo
    currentNode = (Node_t *) malloc(sizeof(Node_t));
    tempStart -> next = currentNode;

    // Se il numero è positivo lo invertiamo, così generare i nodi in ordine corretto
    // Ad esempio, se il numero è 1234 lo converto in 4321 in modo da stampare 1 2 2 3 3 3 4 4 4 4
    if (n > 0) {
        n = invertInt(n);
    }
    // Se il numero è negativo, lo converto semplicemente a positivo
    // Ad esempio, se il numero è -1234 verrà stampata la sequenza 4 4 4 4 3 3 3 2 2 1
    else {
        n = n * (-1);
    }

    // Da li finchè il numero è maggiore di 0 prendiamo cifra per cifra
    while ( n > 0) {
        // Aggiungiamo un numero di nodi pari alla cifra, ciascuno con un valore pari alla cifra stessa
        for (i = 0; i < n%10; i++) {
            currentNode -> value = n%10;
            currentNode -> next = (Node_t *) malloc(sizeof(Node_t));
            currentNode = currentNode -> next;
        }
        n = n / 10;
    }
    return tempStart -> next;

}


int main () {

    Node_t *head;

    head = generateList(3204);

    printList(head);

}