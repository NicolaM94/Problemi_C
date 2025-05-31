/*
Es7: Completare il file ESA 18062020 B 2.c in modo che il programma apra in lettura un file di testo “testoB.txt” contenente parole (stringhe)
ciascuna di al massimo 15 caratteri solo minuscoli (il file è sicuramente non vuoto). 

In particolare, scrivere: 
- la funzione trova, che cerca nel file tutte le parole con almeno 3 vocali, di cui almeno una ’a’, e le stampa. 
Per contare il numero di vocali la funzione deve richiamare la funzione ricorsiva conta. Si possono utilizzare le funzioni della libreria string.h.

- la funzione ricorsiva conta, che riceve come parametro una stringa e un puntatore ad intero e conta quante vocali minuscole contiene la stringa e di queste quante sono le ’a’. 
Ad esempio, se il file “testoB.txt” contiene il testo: bisogna studiare passo passo e adagio per ottenere un voto alto 
Il programma visualizzerà il testo: bisogna studiare adagio 
*/

#include<stdio.h>
#include<string.h>
#define FNAME "testoB.txt"
#define MAXS 15
#define SOGLIA 3

// prototipi 
int conta(char *, int *);
void trova(FILE *);

int main() {
	FILE *fp;

	fp=fopen(FNAME,"r");
	if(fp){
		trova(fp);
		
		fclose(fp);
	} 
	else
		printf("Errore di apertura del file\n");
	return 0;
	
}

// cerca nel file fp le parole con almeno 3 vocali di cui almeno una a e le stampa 
void trova(FILE * fp) {

	char buf[MAXS];
	int i;
	int numa;
	int numvocali;

	while (!feof(fp)) {
		fscanf(fp, "%s", buf);
		numa = 0;
		numvocali = conta(buf, &numa);

		//printf("%s Numvocali: %d	Numa: %d\n",buf, numvocali, numa);

		if (numvocali >= 3 && numa >= 1) {
			printf("%s ", buf);
		}
	}

}

// conta quante vocali ci sono in s e inserisce nella variabile numa quante di queste sono 'a'
int conta(char *s, int *numa){
	if (*s == '\0') {
		return 0;
	} else {
		if (*s == 'a') {
			*numa = *numa + 1;
			return 1 + conta(s+1,numa);
		} else if (*s == 'e' || *s == 'i' || *s == 'o' || *s == 'u') {
			return 1 + conta(s+1, numa);
		} else {
			return 0 + conta(s+1, numa);
		}
	}
}
	
	
	
	
