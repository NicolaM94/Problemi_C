#include <stdio.h>
#define END -1 

int main(){

	typedef struct{
		int cifra;
		int cont;
		int continpari;
		int contindispari;
	} t_cifre;

	int i, input,cifracorrente, copia;
	t_cifre array [10];

	// Popolo l'array finale con delle t_cifre inizialmente vuote
	for (i = 0; i < 10; i++) {
		array[i].cifra = i;
		array[i].cont = 0;
		array[i].continpari = 0;
		array[i].contindispari = 0;
	}

	// Finchè non viene inserita la flag eseguo questo blocco
	do {
		scanf("%d", &input);

		if (input != END) {
			copia = input;

			// Divido ogni numero nelle singole cifre ed eseguo i calcoli richiesti
			while (copia > 0) {

				cifracorrente = copia % 10;
				array[cifracorrente].cont++;

				if (input%2==0) {
					array[cifracorrente].continpari++;
				} else {
					array[cifracorrente].contindispari++;
				}
				copia = copia / 10;

			}
		}
	} while (input != END);
	

	// Stampo i risultati
	for (i = 0; i < 10; i++) {
		printf ("%d %d %d %d", array[i].cifra, array[i].cont, array[i].continpari, array[i].contindispari);
		printf("\n");
	}

	return 0;
}


