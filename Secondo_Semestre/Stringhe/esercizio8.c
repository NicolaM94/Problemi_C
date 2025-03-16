/*Es 8: Scrivere un programma in linguaggio C che legga una frase
introdotta da tastiera. La frase è terminata dall’introduzione del
carattere di invio. La frase contiene sia caratteri maiuscoli che
caratteri minuscoli, e complessivamente al più 100 caratteri. Il
programma deve svolgere le seguenti operazioni:
 visualizzare la frase inserita
 costruire una nuova frase in cui il primo carattere di ciascuna
parola nella frase di partenza è stato reso maiuscolo. Tutti gli altri
caratteri devono essere resi minuscoli. Il programma deve
memorizzare la nuova frase in una opportuna variabile
 visualizzare la nuova frase.
Ad esempio la frase cHe bElLA gIOrnaTa diviene Che Bella
Giornata*/

#include <stdio.h>
#include <ctype.h>
#include "isletter.c"

void main () {

    char frase [101];
    char copia [101];
    int s;

    fgets(frase, 101, stdin);

    printf("%s", frase);

    copia[0] = toupper(frase[0]);

    for (s = 1; s < 101; s++) {
        if (frase[s-1] == 32) {
            copia[s] = toupper(frase[s]);
        } else {
            copia[s] = tolower(frase[s]);
        }
    }

    printf("%s", copia);
    BellRinger();
}