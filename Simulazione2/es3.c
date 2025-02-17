#include <stdio.h>
#define N 3
#define M 4

int main () {

    int matrice [N][M];
    int i,j;
    int flag;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }


    for (i = 0; i < N; i++) {

        flag = 0;

        for (j = 0; j < M; j++) {
            if (matrice[i][j]%2 == 1) {
                flag = 1;
            }
        }

        if (flag == 0) {
            printf("%d ", i);
        }


    }

    return 0;
}