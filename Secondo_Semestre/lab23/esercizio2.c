/*Scrivere un programma C suddiviso in più file (funzioni
per gestire la rubrica e main separato che richiede il tipo di
funzione) che implementa una rubrica.
 Una rubrica è una struttura formata da un array di strutture
contatto (max. 10) e un intero rappresentante il numero di
contatti inseriti.
 Una struttura contatto è formata da: una stringa nome
(max. 128 caratteri), una stringa numero (max. 128 caratteri).
 La definizione della struttura va messa nel file header rubrica.h.
 Sulla struttura rubrica sono definite le seguenti funzioni (file
rubrica.h + rubrica.c):
 struct rubrica aggiungi_contatto
( struct rubrica r, struct contatto c );
Aggiunge il contatto c alla rubrica r se c’è ancora spazio, oppure
ritorna un messaggio di errore altrimenti.
11

 void elenca_contatti( struct rubrica r )
Stampa tutti i contatti contenuti nella rubrica.
 void trova_numero(struct rubrica r, char
nome[])
Stampa il numero di telefono associato al contatto
nome, oppure un messaggio di errore se il nome non è
presente in rubrica.*/
#include <stdio.h>


int main () {

}