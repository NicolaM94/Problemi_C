/*In un concorso gastronomico, n giudici esprimono il loro
giudizio su m piatti. Il giudizio è un valore numerico tra
0 e 5 (più alto il voto più saporito il piatto). I risultati
sono organizzati in una matrice int R[N][M].
 Si scriva un programma in linguaggio C per determinare
il piatto vincente ed il giudice più generoso (ovvero
quello che attribuisce i più alti voti di bontà).*/

#include <stdio.h>
#define N 3
#define M 5

int main () {

    int voti [N][M] = {
        {1,4,3,2,3},
        {1,3,5,3,3},
        {2,5,5,4,5}
    };
    int vincitore = 0;
    int tempsum = 0;
    int sum = 0;
    int giudice = 0;
    int i,j;

    for (j = 0; j < M; j++) {
        tempsum = 0;
        for (i = 0; i < N; i++) {
            tempsum += voti[j][i];
        }
        if (tempsum > sum) {
            sum = tempsum;
            vincitore = j;
        }
    }

    printf("Il vincitore è il concorrente numero %d\n", vincitore+1);

    sum = 0;
    for (i = 0; i < N; i++) {
        tempsum = 0;
        for (j = 0; j < M; j++) {
            tempsum += voti[i][j];
        }
        if (tempsum > sum) {
            sum = tempsum;
            giudice = i;
        }
    }

    printf("Il giudice che ha assegnato i voti più alti è il numero %d\n", giudice+1);

    return 1;
}