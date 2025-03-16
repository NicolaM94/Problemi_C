/*Scrivere un programma che acquisisce una stringa di al più 30
caratteri e calcola e visualizza la sua lunghezza.*/
#include <stdio.h>
#include <string.h>
#define DIM 30

void main () {

    char stringa [DIM+1];
    int counter = 0;
    int end;

    fgets(stringa, DIM+1, stdin);

    printf("Utilizzando strlen: %d\n", strlen(stringa));
    
    end = 0;
    for (int i = 0; i < DIM+1 && end == 0; i++) {
        if (stringa[i] != '\0') {
            counter++;
        } else {
            end = 1;
        }
    }
    printf("Manualmente: %d\n", counter);


}