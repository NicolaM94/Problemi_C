/*
Es7: Si modifichi il file ESA 15062017 B 1.c in modo tale che: 
1) la funzione leggi legga da tastiera una stringa lunga al più 256 caratteri 
2) la funzione crea_lista crei una lista di caratteri a partire da una stringa s escludendo i caratteri numerici.
Tale funzione deve essere ricorsiva. 
3) la funzione stampa stampi la lista di caratteri in input ponendo una freccietta tra gli elementi della lista (si veda esempio di seguito). 

Un esempio di esecuzione del main già implementato nel file è:
   Inserire una stringa: c0a09se3t367t8a 
   Creazione della lista... 
   La lista è: c -> a -> s -> e -> t -> t -> a
*/

#include <stdio.h>
#include <stdlib.h>
#define STR_LIM 256

struct nodo_t{
	char valore;
	struct nodo_t * next;
};


char * leggi();
struct nodo_t * crea_lista(char * s);
void stampa(struct nodo_t * nodo);


void main(){
	printf("Inserire una stringa:\n");
	char * s = leggi();
	
	struct nodo_t * testa = crea_lista(s);
	printf("La lista e':\n");
	stampa(testa);
}


char * leggi(){
	char *s;
	char input;
	char i=0;

	s = (char *)malloc(sizeof(char)*STR_LIM);
	if (s == NULL) {
		printf("errore di allocazione di memoria");
		exit(-1);
	}
	scanf("%s", s);
	return s;
}

struct nodo_t * crea(char valore, struct nodo_t * next) {
	struct nodo_t *new;

	new = (struct nodo_t *)malloc(sizeof(struct nodo_t));
	new -> valore = valore;
	new -> next = next;
	return new;
}

struct nodo_t * crea_lista(char * s) {

	struct nodo_t * nextnode;
	struct nodo_t * head;

	if (*s == '\0') {
		return NULL;
	} else {
		nextnode = crea_lista(s+1);

		if (*s >= 48 && *s <= 58) {
			return nextnode;
		}
		
		head = (struct nodo_t *) malloc(sizeof(struct nodo_t));
		head -> valore = *s;
		head -> next = nextnode;
		return head;
	}
}

void stampa(struct nodo_t * nodo){
	while (nodo -> next != NULL) {
		printf("%c -> ", nodo -> valore);
		nodo = nodo -> next;
	}
	printf("%c", nodo -> valore);
}
