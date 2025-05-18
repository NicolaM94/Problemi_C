/*
Scrivere un programma che acquisisce le informazioni circa età
e sesso di un gruppo di persone e visualizza prima tutte le età di
persone sotto i 20 anni, indipendentemente dal sesso (adolescenti),
poi tutte le età di tutte le donne, infine quelle degli uomini. Per ogni
gruppo si devono visualizzare le età in modo ordinato crescente. I
dati vengono forniti in ingresso come coppie, in cui 1 indica maschio,
2 femmina. Quando l'utente inserisce -1 come età l'acquisizione
termina.
In ingresso il programma riceve una sequenza di coppie di interi
(senz'altro ragionevoli) terminata dal valore -1

Ingressi
32 1 43 2 18 2 16 2 44 1 63 2 18 1 5 1 20 2 -1
Il programma visualizza le età ordinate per gruppi, dopo l'etichetta
del gruppo.

Ingressi
adolescenti: 5 16 18 18
donne: 16 18 20 43 63
uomini: 5 18 32 44
*/

#include <stdio.h>
#include <stdlib.h>


/* Prototipi */

typedef struct node {
    int sex;
    int age;
    struct node *next;
} Person_t;

void printList(Person_t *);

Person_t * addinord (Person_t *, int, int);



/* Main block */

int main () {

    Person_t *womenHead = NULL;
    Person_t *menHead = NULL;
    Person_t *adolHead = NULL;
    int age, sex;

    do {
        scanf("%d", &age);
        if (age != -1) {
            scanf("%d", &sex);

            // Se l'età inserita è < 19 è un teen
            if (age < 19) {
                adolHead = addinord(adolHead, age, sex);
            } 
            // Altrimenti guardo il sesso
            else if (sex == 1) {
                menHead = addinord(menHead, age, sex);
            }
            else {
                womenHead = addinord(womenHead, age, sex);
            }
        }
    } while (age != -1);

    printf("Adolescenti: ");
    printList(adolHead);
    printf("Donne: ");
    printList(womenHead);
    printf("Uomini: ");
    printList(menHead);
    exit(0);
}



/* Funzioni */

void printList (Person_t *listHead) {
    while (listHead != NULL) {
        printf("%d ", listHead -> age);
        listHead = listHead -> next;
    }
    printf("\n");
}

Person_t * addinord (Person_t *listHead, int age, int sex) {

    Person_t *retval;
    Person_t *newNode;

    // Se la lista è vuoto, il nuovo nodo diventa il primo
    if (listHead == NULL) {
        listHead = (Person_t *) malloc(sizeof(Person_t));
        listHead -> age = age;
        listHead -> sex = sex;
        listHead -> next = NULL;
        return listHead;
    }

    // Se la lista non è vuota, scorro la lista fino a trovare un elemento il cui next sia maggiore di age
    // oppure, se questo non esiste, fino alla fine della lista
    // Inoltre, prima di tutto, tengo riferimento al nodo di testa in retval, così da restituire quello
    retval = listHead; 
    while (listHead -> next != NULL && listHead -> next -> age < age) {
        listHead = listHead -> next;
    }

    // Se sono alla fine, significa che il nuovo nodo avrà age maggiore di tutte quelle già inserite
    // Lo appongo alla fine
    if (listHead -> next == NULL) {
        listHead -> next = (Person_t *) malloc(sizeof(Person_t));
        listHead -> next -> age = age;
        listHead -> next -> sex = sex;
        listHead -> next -> next = NULL;
    }
    // Se sono al centro della lista, allora dovrò creare un nuovo nodo da inserire tra quello subito mino e quello subito maggiore
    else {
        newNode = (Person_t *) malloc(sizeof(Person_t));
        newNode -> age = age;
        newNode -> sex = sex;
        newNode -> next = listHead -> next;
        listHead -> next = newNode;    
    }

    return retval;
}
