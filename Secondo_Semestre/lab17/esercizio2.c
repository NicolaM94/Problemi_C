/*Definire la funzione ricorsiva
int contadoppie(char *)
che presa per parametro una stringa, restituisce quante
coppie di doppie la stringa contiene, es. «ammiccare» ne
contiene 2.*/
#include <stdio.h>

int contadoppie (char *s) {
    if (*s == '\0' || *(s+1) == '\0') {
        return 0;
    }
    if (*s == *(s+1)) {
        return 1 + contadoppie(s+1);
    }
    return 0 + contadoppie(s+1);
}


int main () {

    char *stringa = "cane";
    int doppie = 0;

    printf("%d", contadoppie(stringa));


}