/*Data una matrice NXN (con N=9) utilizzata per una semplificazione del gioco Sudoku. 

Si scriva un programma C in grado di:

    Riempire la matrice da tastiera. In ogni cella della matrice dovrà comparire soltanto un numero appartenente all'intervallo [1,9] (non è necessario correggere errori di inserimento dati)
    Chiedere all'utente l'inserimento da tastiera di un indice di riga r e un indice di colonna c appartenenti all'insieme {0,3,6}. 
    Verificare se nel quadrato di dimensione 3X3 e origine nel punto (r,c), ogni valore dell'intervallo [1,9] compare esattamente 1 volta.
    Stampare a video 1 se la proprietà è verificata, 0 altrimenti.*/

#include<stdio.h>
#define N 9

int main() {
    
    int m[N][N];    
    int i,j,r,c;
    int counter = 1;
    int flag;
    int globalflag = 1;
    

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    scanf("%d %d", &r, &c);

    while (counter <= 9) {
        flag = 0;
        for (i = r; i < r+3 && flag==0; i++) {
            for (j = c; j < c+3 && flag == 0; j++) {
                if (m[i][j] == counter) {
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            globalflag = 0;
        }
        counter++;
    }
    
    printf("%d", globalflag);



 
    return 0;

}