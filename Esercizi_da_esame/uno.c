/*Scrivere un programma che dato un array di interi >0 (sicuramente è
così, non serve correggere errori) inizializzato in fase di dichiarazione
e che finisce con il valore sentinella -1 (dichiarato come costante
simbolica STOP), verificare se l’array è in ordine:
1. Crescente
2. Decrescente
3. Nessun ordine
e stampare un opportuno messaggio. Ad esempio l’array int values[]
= {7, 4, 5, 4, 2, STOP}; non è in nessun ordine, l’array int values[] =
{7, 5, 3, 2, 1, STOP}; è in ordine decrescente, mentre l’array int
values[] = {1, 3, 4, 7, 9, STOP}; è in ordine crescente.*/

#include <stdio.h>
#define STOP -1

int main () {

    int array [5] = {7,3,2,1,STOP};
    int crescente = 1;
    int decrescente = 1;
    
    int temp;
    int counter = 1;

    do {
        temp = array[counter];
        if (temp != STOP)
            if (temp < array[counter-1]) {
                crescente = 0;
            }
            if (temp > array[counter-1]) {
                decrescente = 0;
            }
            counter++;
    } while (temp != STOP);

    if (crescente == 1) {
        printf("E' in ordine crescente.\n");
    }
    else if (decrescente == 1) {
        printf("E' in ordine decrescente.\n");
    }
    else {
        printf("Non è ordinato.\n");
    }
    
    return 1;
}