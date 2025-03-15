/*Si scriva un programma in grado di leggere da tastiera un array di interi di dimensione 10; 
l’array deve essere modificato in modo che tutti i numeri dispari precedano i numeri pari (il primo pari incontrato partendo da sinistra viene scambiato con il dispari presente più a destra etc.). 

Stampare l'array ottenuto separando i valori con uno spazio (printf("%d ",....);)

Verrà penalizzata la soluzione che utilizza un array di supporto per raggiungere la soluzione.

For example:

Input    Result
59 26 53 22 31 41 80 87 78 37
59 37 53 87 31 41 80 22 78 26

*/

#include <stdio.h>

int main () {

    int array[10] = {2,4,0,2,8,7,5,3,9,11};
    int numeroDiDispari = 0;
    int i,j;
    int temp;
    int flag;


    // Conto il numero di dispari
    for (i = 0; i < 10; i++) {
        if (array[i]%2==1) {
            numeroDiDispari++;
        }
    }

    // Per un numero di volte pari al numero di dispari (tanto devono essere tutti li...)
    for (i = 0; i < numeroDiDispari; i++) {

        // Se è pari devo scambiarlo
        if (array[i]%2==0) {
            flag = 0;

            // Itero al contrario (dal fondo) alla ricerca del primo dispari che trovo...
            for (j = 9; j>0 && flag == 0; j--) {

                // Il primo che trovo lo scambio
                if (array[j]%2==1) {
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;

                    // Non c'è niente che fermi questo loop interno, quindi uso una variabile flag che interrompe questo for loop dopo che ho trovato il primo dispari
                    flag = 1;
                }
            }
        }
    }

    // Stampo
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 1;
}