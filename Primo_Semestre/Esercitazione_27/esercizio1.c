/*Scrivere un programma che raccoglie una stringa di al più 100 caratteri e può contenere spazi e punteggiatura.
Il programma conta quanti consonanti doppie ci sono nella stringa.*/

#include <stdio.h>
#define N 100

int main () {
    char s [N+1];
    int i, conto;
    char c;

    i = 0; 
    scanf("%c", &c);
    while (c != '\n') {
        s[i] = c;
        i++;
        scanf("%c", &c);
    }
    s[i] = '\0';

    if (s[0] != '\n') {
        for (i = 1; conto = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'a' && s[i] <= 'z' && !(s[i] == 'a' ||) || !(s[i] == 'e') ... {
                s[i] == s[i-1];
                conto++;
            }
        }
    }
    printf("%d\n", conto);
    return 0;
}