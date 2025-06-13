/*
 * Completare la definizione delle funzioni presenti nel programma.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 80

int run_length(char *s, char c);
int count_run_lengths(char *s);

int main() {
    char s[MAX_LENGTH + 1];
    scanf("%s", s);
    printf("%d\n", count_run_lengths(s));
    return 0;
}

// FUNZIONE RICORSIVA
/*
 * Restituisce il numero di caratteri c consecutivi presenti all'inizio della stringa s.
 */
int run_length(char *s, char c) {

    if (s[0] != c) {
        return 0;
    }
    return 1 + run_length(s+1, c);
}

/*
 * Ritorna il numero di sequenze di caratteri consecutivi presenti nella stringa di ingresso.
 * Per esempio, per s = "aaaaabbbbbbaa" ritorna 3,
 * perchè ci sono tre sequenze: una sequenza di 'a', una sequenza di 'b' e una sequenza di 'a'
 */
int count_run_lengths(char *s) {
    
    int counter = 0;
    int i = 0;

    while (s[i] != '\0' && i < strlen(s)) {
        counter++;  
        i += run_length(s,s[0]);
    }
    return counter;
}