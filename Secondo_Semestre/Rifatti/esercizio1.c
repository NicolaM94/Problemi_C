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
#define DIM 100


int main () {

    char stringa [DIM+1];
    char newStringa [DIM+1];
    int i;

    fgets(stringa, DIM+1, stdin);

    printf("%s", stringa);

    newStringa[0] = toupper(stringa[0]);
    
    for (i = 1; i < DIM+1 && stringa[i] != '\0'; i++) {
        if (stringa[i-1] == ' ') {
            newStringa[i] = toupper(stringa[i]);
        } else {
            newStringa[i] = tolower(stringa[i]);
        }
    }
    newStringa[i] = '\0';
    
    printf("%s", newStringa);

    return 0;
}