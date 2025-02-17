/*Shiftare un array di n posti avanti*/
#include <stdio.h>


int main () {

    int array [10] = {0,1,2,3,4,5,6,7,8,9};
    int a,b,i;

    // Carico i primi due valori dell'array in a e b
    a = array[0];
    b = array[1];

    // Partendo dal secondo elemento nell'array...
    for (i = 1; i < 10; i++) {
        
        // Sostituisco a alla posizione attuale
        array[i] = a;

        // Metto b in a
        a = b;

        // Prendo il prossimo b dall'array, se la prossima posizione esiste (non sono sul fondo)
        if (i < 9) {
            b = array[i+1];
        }
        
    }

    // L' unica dposizione che non sono stata modificata dal loop è la prima
    // quindi la modifico a mano
    array[0] = b;

    for (i = 0; i < 10; i++) {
        printf("%d", array[i]);
    }

}