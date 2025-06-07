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

int main(){
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
void trova(FILE * fp){
  char bufs [MAXS];
  int numa, vocali;
  while (fscanf(fp,"%s", bufs) == 1) {
    numa = 0;
    vocali = conta(bufs, &numa);
   
    if (vocali >= SOGLIA && numa >= 1) {
      printf("%s\n", bufs);
    }
  } 
}

// conta quante vocali ci sono in s e inserisce nella variabile numa quante di queste sono 'a'
int conta(char *s, int *numa){
  int i;
  int count = 0;
  
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      count++;
      if (s[i] == 'a') {
        *numa = *numa + 1;
      }
    }
  }

  //printf("Stringa corrente: %s  -> Conta ha trovato: %d vocali di cui %d 'a'\n", s, count, numa);

  return count;
}
	
	
	
	
