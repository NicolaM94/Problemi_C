/*Scrivere un programma che acquisisce un array di 10 numeri
interi e un intero n senz’altro positivo. Il programma modifica
l’array facendo scorrere ogni intero di n posizioni a destra (gli
ultimi n interi vengono riportati all’inizio).
Esempio:
Ingresso: 0 1 2 3 4 5 6 7 8 9 e n=3
Uscita: 7 8 9 0 1 2 3 4 5 6*/

#include <stdio.h>
#define M 10

void main () {

    int array [M] = {0,1,2,3,4,5,6,7,8,9};
    int n = 3;
    int tempValue = 0;

    int a,b;

    // Esegue n volte
    for (int j = 0; j < n; j++) {

        // Due variabili temporanee dove inizialmente salvi i primi due elementi dell'array
        a = array[0];
        b = array[1];

        // fai un ciclo sull'array
        for (int i = 1; i < 9; i++) {
            array[i] = a;
            a = b;
            b = array[i+1];
        }
        
        array[M-1] = a;
        array[0] = b;

        
        for (int i = 0; i < M; i++) {
            printf("%d", array[i]);
        }
        printf("\n");
    }
    
}