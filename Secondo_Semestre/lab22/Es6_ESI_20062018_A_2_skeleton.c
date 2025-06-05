/*
Es6: Si completi il file (skeleton) ESI_20062018_A_2.c di modo che: 
new_cell crea una nuova cella di tipo struct cell_t con nome e valore specificato.
init_matrix crea una matrice di struct cell_t della dimensione specificata. Le celle assumono per righe i nomi ’A’, ’B’,...e un singolo valore specificato in ingresso.
print_matrix stampa la matrice specificata coi nomi delle celle se il corrispondente valore è diverso da 0 altrimenti stampa un BLANK. 
swap_cells scambia i nomi e i valori delle celle di nome name1 e name2. Se tali celle non sono presenti nella matrice specificata non fa nulla. 
Se tutto è corretto, l’esecuzione del programma fornirà il seguente output: 
A B C 
D E F 
G H I 
F B C 
D E A 
G H I 

NOTA: Lo studente NON deve gestire la deallocazione della lista.
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 3
#define ASCII_A 65
#define BLANK ' '

struct cell_t {
    int value;
    char name;
};

/*
 * Crea una nuova cella con nome e valore specificato
 */
struct cell_t* new_cell(char name, int value) {
    struct cell_t * new;
    new = (struct cell_t *) malloc(sizeof(struct cell_t));
    new -> value = value;
    new -> name = name;
    return new;
}

/*
 * Crea una matrice della dimensione specificata. Le celle assumono per righe i nomi 'A', 'B',...
 * e il valore specificato
 */
void init_matrix(struct cell_t* matrix[DIM][DIM], int size, int value) {
    int i,j;
    char sl = 'A';

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            matrix[i][j] = new_cell(sl,value);
            sl = sl+1;
        }
    }
}

/*
 * Stampa la matrice specificata coi nomi delle celle se il corrispondente valore è diverso da 0 altrimenti stampa uno spazio
 */
void print_matrix(struct cell_t* matrix[DIM][DIM], int size) {

    int i,j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (matrix[i][j] -> value != 0) {
                printf("%c", matrix[i][j] -> name);
            } else {
                printf(" ");
            }
        }
        printf("\n");
   }
}

/*
 * Scambia i nomi e i valori delle celle di nome name1 e name2.
 * Se tali celle non sono presenti nella matrice specificata non fa nulla.
 */
void swap_cells(struct cell_t* matrix[DIM][DIM], int size, char name1, char name2) {

    int r,s;
    int i,j;
    int temp_value;
    int stop;

    stop = 0;
    for (i = 0; i < size && stop != 1; i++) {
        for (j = 0; j < size && stop != 1; j++) {
            if (matrix[i][j] -> name == name1) {
                r = i;
                s = j;
                stop = 1;
            }
        }
    }
    stop = 0;
    for (i = 0; i < size && stop != 1; i++) {
        for (j = 0; j < size && stop != 1; j++) {
            if (matrix[i][j] -> name == name2) {
                temp_value = matrix[i][j] -> value;
                matrix[i][j] -> value = matrix[r][s] -> value;
                matrix[i][j] -> name = name1;
                matrix[r][s] -> value = temp_value;
                matrix[r][s] -> name = name2;
                stop = 1;
            }
            
        }
    }





}

/*
 * Program entry point
 */
int main() {
    struct cell_t* matrix[DIM][DIM];

    init_matrix(matrix, DIM, 1);
    print_matrix(matrix, DIM);
    printf("\n");
    swap_cells(matrix, DIM, 'A', 'F');
    print_matrix(matrix, DIM);
    return 0;
}
