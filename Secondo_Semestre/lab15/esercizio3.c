/*Scrivere una funzione con il seguente prototipo
void scambia(char s[])
che scambi il primo carattere della stringa s (stringa
senza spazi di massimo 20 caratteri) con l’ultimo.
Scorrere la stringa usando l’aritmetica dei puntatori.*/

#include <stdio.h>
#include <string.h>

void scambia (char s[]) {

    char t;
    t = *s;
    *s = *(s+strlen(s)-1);
    *(s+strlen(s)-1) = t;
}

void main () {

    char stringa[20];
    int i;

    scanf("%s", stringa);

    scambia(stringa);

    printf("%s", stringa);
}

