/*Scrivere un programma C composto da:
 Una funzione leggi che richiede all’utente di
inserire da standard input una matrice 4x5.
 Una funzione trasposta che riceve come
parametro una matrice a 4x5 e una matrice b
5x4. La funzione calcola la trasposta di a e la
memorizza in b.
 Una matrice a con i righe e j colonne può
essere trasposta in una matrice b con j righe
e i colonne, dove ogni elemento b(j,i) = a(i,j).*/

#include <stdio.h>

int leggi (int matrice[4][5], int righe, int colonne) {

    int i,j;

    puts("Inserisci i valori per una matrice 4x5: ");

    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }
}

int trasponi (int matrice [4][5], int (*trasposta)[4], int righe, int colonne) {

    int i,j;

    for (i = 0; i < colonne; i++) {
        for (j = 0; j < righe; j++) {
            trasposta[i][j] = matrice[j][i];
        }
    }

}

void main () {

    int i,j;
    int matrice[4][5];
    int trasposta[5][4];


    leggi(matrice, 4,5);

    trasponi(matrice, trasposta, 5,4);

    printf("\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", trasposta[i][j]);
        }
        printf("\n");
    }

}