#include <stdlib.h>
#include <stdio.h>

#define RIGHE 7
#define COL 6

//prototipi
int conta(int mat[RIGHE][COL]);


int main(void) {
  int i, j, M[RIGHE][COL];
  int c;
	for(i=0; i<RIGHE; i++)
		for(j=0; j<COL; j++)
			scanf("%d",&M[i][j]);

	c=conta(M);
  printf("%d", c);
  
  
  return(0);
  
}

/* la funzione restituisce l'indice della prima colonna con il maggior numero di 1 consecutivi, -1 se non esiste */

int conta(int mat[RIGHE][COL]){
	
	int maxuno = -1;
	int maxcol = -1;
	int tempsum = 0;
	int i,j;

	for (i = 0; i < COL; i++) {
		tempsum = 0;
		for (j = 0; j < RIGHE; j++) {
			if (mat[j][i] == 1) {
				tempsum++;
			}
		}
		if (tempsum >= maxuno) {
			maxuno = tempsum;
			maxcol = i;
		}
	}


	return maxcol;

	
}