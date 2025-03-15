#include <stdio.h>
#define N 4
#define M 3


int main () {

    int L = 0;
    int matrice[N][M];
    int somma;
    int counter;
    int tempdiff;
    int flag = 0;
    int i,j;

    // Raccolta dati
    do {
        printf("Inserisci il valore di L: \n");
        scanf("%d", &L);
    } while (L < 0 && L > N);
    
    printf("Inserisci i valori della matrice :\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    
    // Per ogni colonna
    for (j = 0; j < M && flag == 0; j++) {

        // Per ogni riga
        for (i = 0; i <= N-L && flag == 0; i++) {

            /*Qua sotto è la parte difficile
            Se io ho una sequenza di numeri cre crescono/decrescono linearmente la loro somma sarà pari al primo elemento * L volte
            + la differenza tra il primo e il secondo moltiplicata per la sommatoria di Gauss fino a L-1. Cioè supponi la sequenza:
            
            7   
            10
            13
            16
            19
            
            allora posso scriverla come
            7
            7 + 3
            7 + 3 + 3
            7 + 3 + 3 + 3
            7 + 3 + 3 + 3 +3
            
            Tutto questo è pari a 7 * 5 + (10-7) * (4)(5)/2

            Quindi se la somma di 7 + 10 + 13 + 16 + 19 è uguale a 7 * 5 + (10-7) * (4)(5)/2 ho una sequenza lineare.             
            */

            counter = 0;
            somma = 0;
            tempdiff = matrice[i+1][j] - matrice[i][j];
            flag = 0;

            while (counter != L) {
                somma += matrice[i+counter][j];
                counter++;
            }

            if (somma == L*matrice[i][j] + tempdiff * (L*(L-1)/2)) {
                flag = 1;
            }
        }
    }

    if (flag == 0) {
        printf("KO\n");
    } else {
        printf("OK\n");
    }


    return 1;
}