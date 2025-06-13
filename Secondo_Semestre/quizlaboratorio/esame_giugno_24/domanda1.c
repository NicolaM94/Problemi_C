#include<stdio.h>
#define N 3
#define M 4
#define K 3

int main(){
	int sum = 0; 
	int mat[N][M];
	int vec[K];
	int type;
	int i,j,k;
	int row, col;
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%d",&mat[i][j]);
		}
	}

	for(k=0;k<K;k++){
		scanf("%d",&vec[k]);
	}
	
	scanf("%d",&type);
	
	
	//completare
	if (type == 1) {
		for (k = 0; k < K; k++) {
			for (i = 0; i < N; i++) {
				for (j = 0; j < N; j++) {
					if (j+n == k) {
						sum += mat[i][j];
					}
				}
			}
		}
	}
	else if (type == 2) {

		

		
	}
	
	printf("Somma: %d\n",sum);
	return 0;
}