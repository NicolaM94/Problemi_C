/*Definire la funzione ricorsiva
int doppie(char *)
che presa per parametro una stringa, restituisce 1 se la
stringa contiene almeno un carattere doppio (ripetuto in
posizioni consecutive, es «gatto»), 0 altrimenti.*/

#include <stdio.h>
#define DIM 10

int doppie (char *s) {

    if (*s == '\0' || *(s+1) == '\0') {
        return 0;
    }

    if (*s == *(s+1)) {
        return 1;
    }

    return doppie(s+1);
}


int main () {

    char stringa[] = "gatto";

    printf("Ci sono doppie? %d\n",doppie(stringa));
}