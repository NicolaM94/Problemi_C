/*Scrivere la funzione cambia che prende in ingresso una stringa di massimo 10 caratteri cambia tutti i caratteri numerici
con un asterisco e restituisce al chiamante quante sostituzioni sono state fatte*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int cambia (char s[]) {
    int i,num = 0;
    for ( i = 0; stringa[i] != '\0', i++) {
        if (stringa[i] >= '0' && stringa[i] <= '9') {
            stringa[i] = '*';
            num++;
        }
    }
    return num;
}

int main (int argc, char *argv[]) {

    char stringa[DIM+1];
    int r;

    scanf("%s", stringa);
    r = cambia(stringa);
    printf("%s %d\n", stringa, r);
    exit(0);
}