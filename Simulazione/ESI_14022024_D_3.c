#include <stdio.h>
#define DIM 10

int maxcifrapari(int);

int main(){

	int a[DIM];
	int out[DIM*2];
	int i, counter;

	// Raccolgo i numeri in input
	for (i = 0; i < DIM; i++) {
		scanf("%d", &a[i]);
	}

	// Uso un counter per tenere traccia dell'indice di destinazione, che viene incrementato all'interno del ciclo
	counter = 0;
	for (i = 0; i < DIM; i++) {
		out[counter] = a[i];
		counter++;
		out[counter] = maxcifrapari(a[i]);
		counter++;
	}

	// Stampo i risultati
	for (i = 0; i < DIM*2; i++) {
		printf("%d ", out[i]);
	}

	return 0;
}


int maxcifrapari (int numero) {

	// Inizializzo diretamente a -1 così se non trovo cifre pari restituisco quello
	int out = -1;
	int temp;
	
	// Ciclo su tutte le cifre del numero e se una è pari e maggiore di out, sostituisco out
	while (numero > 0) {
		temp = numero%10;
		if (temp%2==0 && temp > out) {
			out = temp;
		}
		numero = numero/10;
	}

	return out;
}