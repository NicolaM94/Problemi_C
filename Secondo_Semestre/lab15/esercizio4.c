/*Scrivere una funzione con il seguente prototipo
void inverti(char s[])
Per invertire una stringa s di massimo 20 caratteri
(ad esempio “ciao” diventa “oaic”). Scorrere la stringa
(senza spazi) usando l’aritmetica dei puntatori*/

#include <stdio.h>
#include <string.h>

int inverti(char *s) {

    char first;
    char second;
    int i;

    second = *s;
    first = *(s+1);
    for (i = 1; i < strlen(s); i++) {
        *(s+i) = first;
        first = second;
        second = *(s+1+i);
    }

}

void main () {

    char stringa[20];

    scanf("%s", stringa);

    inverti(stringa);

    printf("%s", stringa);

}