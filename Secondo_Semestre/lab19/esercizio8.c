/*mplementare un programma composto dal solo metodo
main che
 Crea dinamicamente un array di int di dimensione
specificata dall’utente da tastiera
 Riempie l’array con valori random tra 0 e 9 (estremi
inclusi)
 Stampara l’array
 Conta quanti elementi dell'array sono multipli di 3
 Realloca l’array aggiungendo un elemento ed inserisce in
ultima posizione il numero di multipli di 3 presenti
 Realloca l’array aggiungendo un ulteriore elemento ed
inserire in prima posizione il numero di multipli di 3
presenti
 Dealloca la memoria dinamica*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main () {

    int arraylen;
    int *ptr;
    int i;
    int j;

    puts("Inserisci la lunghezza dell'array di interi: ");
    scanf("%d", &arraylen);

    ptr = (int *) (calloc(arraylen, sizeof(int)));

    if (ptr == NULL) {
        perror("Unable to address memory");
        exit(-1);
    }

    // Inserisce valori random nell'array
    for (i = 0; i < arraylen; i++) {
        *(ptr+i) = rand()%10;
    }

    // Stampa l'array
    for (i = 0; i < arraylen; i++) {
        printf("%d", *(ptr+i));
    }

    // Conta quanti elementi dell'array sono multipli di 3
    j = 0;
    for (i = 0; i < arraylen; i++) {
        if (*(ptr+i)%3==0) {
            j++;
        }
    }
    printf("\nCi sono %d multipli di 3\n", j);
    
    // Rialloca la memoria e aggiunge un indirizzo all'array inserendo il numero di multipli
    ptr = (int *) realloc(ptr, sizeof(int)*(arraylen+1));
    *(ptr+arraylen) = j;

    // Stampa l'array
    for (i = 0; i < arraylen+1; i++) {
        printf("%d", *(ptr+i));
    }
    printf("\n");

    //Realloca l’array aggiungendo un ulteriore elemento ed
    // inserire in prima posizione il numero di multipli di 3
    // presenti

    ptr  = (int *) realloc(ptr, sizeof(int)*(arraylen+2));
    for (i = arraylen+1; i >= 1; i--) {
        *(ptr+i) = *(ptr+i-1);
    }
    *ptr = j;

    // Stampa l'array
    for (i = 0; i < arraylen+2; i++) {
        printf("%d", *(ptr+i));
    }


    // !!! LIBERA LA MEMORIA !!!
    // Dealloca la memoria
    free(ptr);



}