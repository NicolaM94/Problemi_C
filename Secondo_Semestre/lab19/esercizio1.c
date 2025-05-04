/*Scrivere un programma scomposto in
funzioni che:
 Definisce globalmente una matrice 4*4 di interi
 Riempie la matrice con valori random tra 0 e 10
(estremi compresi) rifiutando valori non validi
 Stampa la matrice
 Restituisce al main l’indice di riga e di colonna che
hanno somma degli elementi massima (se esistono
più righe e/o colonne con somma massima restituire
la prima incontrata)*/

#include <stdio.h>
#include <stdlib.h>

int matrice [4][4];

void stampaMatrice (int matrice[][4]) {
    int i,j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j<4; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

int main () {

    int i,j;

    // Riempio la matrice di valori
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrice[i][j] = rand()%10;
        }
    }

    stampaMatrice(matrice);


}