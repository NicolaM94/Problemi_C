/*Definire la funzione ricorsiva
int palindroma(char *, int, int)
che ricevuta in ingresso una stringa, la posizione del
primo carattere valido nella stringa (di solito 0 nella
chiamata nel main) e la sua lunghezza, restituisce 1 se la
stringa passata come parametro è palindroma, 0
altrimenti.*/

#include <stdio.h>
#include <string.h>

int palindroma (char *s, int start, int stop) {

    if (start >= stop) {
        return 1;
    } else {
        if (s[start] != s[stop]) {
            return 0;
        }
        return palindroma (s, start+1, stop-1);
    }
}

int main () {

    char *stringa = "onorafono";

    printf("Palindroma? %d\n", palindroma(stringa, 0, strlen(stringa)-1));



}