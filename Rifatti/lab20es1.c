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
#include <stdlib.h>
#define DIM 5


int * aggiungi(int *array, int n, int *dim) {
    int i = 0;
    int j;

    array = (int *) realloc(array, sizeof(int)*(*(dim)+1));
    while (array[i] < n) {
        i++;
    }

    for (j = *dim; j >= i; j--) {
        array[j+1] = array[j];
    }

    array[i] = n;
    *dim = *(dim) +1;
    return array;
}



int main () {

    int *array;
    int i;
    int add;
    int dim;

    puts("Inserisci la dimensione dell'array iniziale: ");
    scanf("%d", &dim);

    array = (int *)malloc(sizeof(int)*dim);
    if (array == NULL) {
        return -1;
    }

    puts("Inserisci i valori iniziali: ");
    for (i = 0; i < dim; i++) {
        scanf("%d", &array[i]);
    }

    while (1) {
        puts("Inserisci il valore da aggiungere: ");
        scanf("%d", &add);
        array = aggiungi(array, add, &dim);


        for (i = 0; i < dim; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        
    }




}