#include <stdio.h>

int main () {

    int mat[3][3] = {{1,2,4}, {1,2,4}, {1,2,4}};
    int i,j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++ ) {
            printf("%d ", *(mat+i+j));
        }
        printf("\n");
    }

}