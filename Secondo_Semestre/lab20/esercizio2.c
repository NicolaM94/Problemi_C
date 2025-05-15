/*Sia dato un array contenente una sequenza
ordinata di interi ed allocato dinamicamente. Si
scriva una funzione C che ricevendo in ingresso
l’array, la sua dimensione ed un intero, modifichi il
vettore in questione inserendo il nuovo intero nella
posizione corretta. Ad esempio, se il vettore v
contiene gli interi 4 32 57 98 la funzione chiamata
con i parametri v, 4, 50 dovrà modificare v in un
vettore di 5 elementi contenente 4 32 50 57 98.*/

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int printarray (int *array, int dim) {
    int i;
    for (i = 0; i < dim; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int modifyArray (int *mem_p, int dim, int toInsert) {

    int i;

    // Rialloca la memoria
    mem_p = (int *) realloc(mem_p,(dim+1)*sizeof(int));
    // In caso di errore, ritorna 0 così da essere verificato l'errore nel main
    if (mem_p == NULL) {
        return 0;
    }

    // Sposta i valori maggiori di toInsert avanti di uno
    // Occhio qua la dimensione che mi serve è ancora quella precedente, alla posizione dim+1 non c'è nulla di utile
    // al momento.
    for (i = dim-1; i > 0 && mem_p[i] > toInsert; i--) {
        if (mem_p[i] > toInsert) {
            mem_p[i+1] = mem_p[i];
        }
    }
    // Inserisce il valore nella posizione corretta
    mem_p[i+1] = toInsert;

    // Ritorna dim+1 così da poter essere riassegnata al ciclo successivo.
    return dim+1;
}

int main () {

    int dim;
    int i;
    int *mem_p;
    int input;

    // Allocazione array dinamico e verifica
    puts("Inserisci la dimensione dell'array da allocare");
    scanf("%d", &dim);
    mem_p = (int *) malloc(dim*sizeof(int));
    if (mem_p == NULL) {
        perror("Errore nell'allocazione della memoria: ");
        exit(-1);
    }

    // Raccolta valori da stdin
    printf("Inserisci %d valori per l'array: \n", dim);
    for (i = 0; i < dim; i++ ) {
        scanf("%d", &mem_p[i]);
    }
    // Stampa di verifica
    printf("Inserisci %d valori per l'array: \n");
    for (i = 0; i < dim; i++ ) {
        printf("%d", mem_p[i]);
    }
    
    // Inserimento iterativo e interattivo di valori nell'array e stampa
    do {
        puts("Inserisci il valore da aggiungere");
        scanf("%d", &input);
        if (input != 0) {
            i = modifyArray(mem_p, i, input);
            if (i == 0) {
                perror("Errore nella riallocazione dell'array in memoria");
                free(mem_p);
                exit(-1);
            }
            printarray(mem_p, i);
        }
    } while (input != 0);
    

    // Libera la memoria!
    free(mem_p);

    return 0;
}