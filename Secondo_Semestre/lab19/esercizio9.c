/*Es 9: Implementare un programma composto dal solo metodo
main che
 Crea dinamicamente una matrice di interi di dimensioni
richieste dall'utente;
 Riempie la matrice con valori presenti in un file "input.txt".
Se il file non contiene un numero sufficiente di valori,
riempire le celle rimanenti con uno 0;
 Stampa la matrice.*/

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

int main () {

    int rows, cols;
    int **ptr;

    puts("Inserisci il numero di righe e di colonne (separate da uno spazio, es: 3 4):");
    scanf("%d %d", &rows, &cols);

    ptr = (int *)





}