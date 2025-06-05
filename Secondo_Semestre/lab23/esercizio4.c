/*Realizzare il sottoprogramma somme_prefisse che
accetta come parametro un array di interi a[] di
lunghezza N (e qualsiasi altro parametro ritenuto
necessario); si garantisce che si avrà sempre N >= 1.
La funzione deve restituire un NUOVO array b[],
sempre di lunghezza N, contenente le "somme prefisse"
di a[].
Specificamente, per ogni j (j=0,…,N-1) i valori di b[j]
si ottengono dalla somma degli elementi a[0] +…+ a[j].
Ad esempio, se a[] = {1,2,1,2,1}, si otterrà b[] =
{1,3,4,6,7}.
Si scrivano inoltre il prototipo del sottoprogramma,
la chiamata nel main, e la dichiarazione di tutte le
variabili ritenute utili.
(Bonus di 1 punto per la definizione ricorsiva)*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

int *somme_prefisse (int *, int);

int somme_prefisse_rec (int *, int*, int);

int main () {

    int nums[N];
    int *out;
    int i;

    for (i = 0; i< N; i++) {
        scanf("%d", &nums[i]);
    }

    out = somme_prefisse(nums, N);

    for (i = 0; i< N; i++) {
        printf("%d ", out[i]);
    }

    printf("\n");

    somme_prefisse_rec(nums, out, N-1);
    for (i = 0; i< N; i++) {
        printf("%d ", out[i]);
    }
}

// Versione iterativa, doppio loop e via
int * somme_prefisse (int *array, int dim) {
    int *out;
    int i,j, res;

    out = (int *) malloc(sizeof(int) * N);
    if (out == NULL) {
        return NULL;
    }

    for (i = 0; i < dim; i++) {
        res = 0;
        for (j = 0; j <= i; j++) {
            res += array[j];
        }
        out[i] = res;
    }
    return out;

}

// Versione ricorsiva
// NOTA: A differenza della versione iterativa questa necessita di passare anche l'array out già allocato.
// Allocarlo ricorsivamente sarebbe stato un macello
int somme_prefisse_rec (int *a, int *o, int dim) {

    // Se dim == 0, imposta il primo indice al valore del primo di a e restituisce il suo valore, in modo che
    // venga utilizzato per calcolare il prossimo nodo, chiamato nell'else
    if (dim == 0) {
        o[0] = a[0];
        return a[0];
    } 
    // se dim != 0, allora popola il nodo dim con il valore di a + quello del nodo precedente, che a sua volta farà la stessa cosa fino
    // a incontrare il primo che torna a[0]
    else {
        o[dim] = a[dim] + somme_prefisse_rec(a,o,dim-1);
    }
    
}