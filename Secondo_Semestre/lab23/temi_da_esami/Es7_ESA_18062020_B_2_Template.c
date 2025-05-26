/*
Es7: Completare il file ESA 18062020 B 2.c in modo che il programma apra in lettura un file di testo “testoB.txt” contenente parole (stringhe) ciascuna di al massimo 15 caratteri solo minuscoli (il file è sicuramente non vuoto). In particolare, scrivere: 
la funzione trova, che cerca nel file tutte le parole con almeno 3 vocali, di cui almeno una ’a’, e le stampa. Per contare il numero di vocali la funzione deve richiamare la funzione ricorsiva conta. Si possono utilizzare le funzioni della libreria string.h. 
la funzione ricorsiva conta, che riceve come parametro una stringa e un puntatore ad intero e conta quante vocali minuscole contiene la stringa e di queste quante sono le ’a’. 
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
  int founda = 0;
  int count;
  int c, r;

  while (!feof(fp)) {
    
    r = fscanf(fp, "%s", buf);
    count = 0;
    founda = 0;
    
    for (c = 0; c < r; c++) {
      if (buf[c] == 'a', buf[c] == 'e', buf[c] == 'i', buf[c] == 'o', buf[c] == 'u') {
        count++;
        if (buf[c] == 'a') {
          founda = 1;
        }
      }
    }

    if (count == 3 && founda == 1) {
      printf("%s", buf)
    }


  }

}

// conta quante vocali ci sono in s e inserisce nella variabile numa quante di queste sono 'a'
int conta(char *s, int *numa){
  // TODO: inserire codice qui
}
	
	
	
	
