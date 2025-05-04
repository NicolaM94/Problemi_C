/*Scrivere una funzione ricorsiva che conta quante vocali
minuscole contiene una stringa (senza spazi)*/

#include <stdio.h>
#include <string.h>

int contaVocaliMinuscole (char *s) {

    if (*s == '\0') {
        return 0;
    } else {
        if (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u') {
            return 1+contaVocaliMinuscole(s+1);
        } else {
            return 0 + contaVocaliMinuscole(s+1);
        }
    }
    
}

int main () {

    char s[5] = "mamma";

    printf("%d", contaVocaliMinuscole(s));

    return 0;
}