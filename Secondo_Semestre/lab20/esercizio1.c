/*Si vuole gestire una classe di studenti tramite un array di
dimensione variabile; le informazioni degli studenti hanno la seguente
definizione di tipo:
struct t_stud{
char nome[21];
int eta;
};
oppure
typedef struct {
char nome[21];
int eta;
} t_stud;
Scrivere una funzione C che prende come parametro il numero di
studenti da inserire e che restituisce l’indirizzo dell’array dinamico. I
nomi e le età vengono lette da tastiera. Gestire eventuali errori nella
fase di allocazione di memoria, restituendo NULL in caso di errori,
l’indirizzo del vettore in caso di successo.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// Struttura base di definizione di uno studente
typedef struct {
    char nome [21];
    int eta;
} studente_t;


int main () {

    int i,j;
    studente_t *memp;

    puts("Inserisci il numero di studenti da registrare");
    scanf("%d", &i);

    // Alloca in memoria un array di i indirizzi di dimensione studente_t
    memp = (studente_t *) malloc(i*sizeof(studente_t));
    // Verifica che non ci siano stati errori di allocazione
    if (memp == NULL) {
        perror("Errore di allocazione delle memoria");
        exit(-1);
    }

    for (j = i; j>0; j--) {
        puts("Inserisci il nome di uno studente");
        scanf("%s", &memp[i-j].nome);
        puts("Inserisci la sua età");
        scanf("%d", &memp[i-j].eta);
    }

    puts("Studenti registrati correttamente!\n");
    for (j = 0; j < i; j++) {
        printf("%s - %d\n", memp[j].nome, memp[j].eta);
    }


    // LIBERA LA MEMORIA!
    free(memp);

    
}