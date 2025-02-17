#include <stdio.h>
#define N 10

int main() {  

    int src[N];
    int dispari = 0;
    int i,j,flag;
    int temp;


    for (i = 0; i < N; i++) {
        scanf("%d", &src[i]);
    }

    // Itero e calcolo quanti dispari sono presenti nell'array di numeri inseriti
    for (i = 0; i < N; i++) {
        if (src[i]%2==1) {
            dispari++;
        }
    }

    // Sposto i dispari
    for (i = 0; i < dispari; i++) {

        // se un elemento è pari
        if (src[i]%2==0) {

            flag = 0;

            // trovo il primo dispari da destra
            for (j = N-1; j > 0 && flag==0; j--) {

                if (src[j]%2==1) {

                    temp = src[j];
                    src[j] = src[i];
                    src[i] = temp;

                    // Non c'è nulla che fermi questo ciclo quindi uso una flag
                    flag = 1;
                }
            }
        }
    }

    // Stampo
    for (i = 0; i < N; i++) {
        printf("%d ", src[i]);
    }

    return 0;
  
}