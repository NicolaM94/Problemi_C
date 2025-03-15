#include<stdio.h>
#define N 3
#define M 4

int main(){

  int l, i, j,k,h;
	int m[N][M];
	int trovato=0;
	int prod, riga, col;

	
  // Acquisizione dati
  scanf("%d", &l);
  while(l<=0)
		scanf("%d", &l);
  for(i=0;i<N;i++){
    for(j=0;j<M;j++){
      scanf("%d",&m[i][j]);
    }
  }
  
	//verifica la proprietà
	for (i = 0; i < N && trovato == 0; i++) {
    
    for (j = 0; j < M && trovato == 0; j++) {

      prod = 1;


      // Immagino una sottomatrice attorno all'elemento [i][j] e ci itero con due for loop
      // k per le righe, j per le colonne
      for (k = i -1; k <= i+1; k++) {

        for (h = j-1; h <= j+1; h++) {

          // Questa condizione verifica che k e h siano dentro i confini della matrice originale
          // altrimenti non trovo nulla da moltiplicare
          if (k < N && k >= 0 && h < M && h >= 0) {

            prod = prod * m[k][h];
           
          }

        }

      }

      // Verifico che il prodotto della sottomatrice immaginata sia maggiore di l
      // In tal caso, modifico le variabili da stampare e faccio scattare la flag 'trovato'
      if (prod > l) {
        printf("Trovato");
        riga = i;
        col = j;
        trovato = 1;
        }
      
      }
      
    }
  

  // Stampo
  if (trovato == 1) {
    printf("OK %d %d %d\n", riga, col, prod);
  } else {
    printf("KO\n");
  }

	
	return 0;
}
