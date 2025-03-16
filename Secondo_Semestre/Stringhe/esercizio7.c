/*Es 7: Scrivere un programma in linguaggio C che legga una frase
introdotta da tastiera. La frase è terminata dall’introduzione del
carattere di invio. La frase contiene sia caratteri maiuscoli che
caratteri minuscoli, e complessivamente al più 100 caratteri. Il
programma dovrà stampare su schermo le seguenti informazioni:
 per ognuna delle lettere dell’alfabeto (considerare 26 lettere), il
numero di volte che la lettera compare nella stringa
 il numero di consonanti presenti nella stringa
 il numero di vocali presenti nella stringa*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Ritorna 1 se l è vocale
int isVocale (char l) {
    char vocali [5] = {'A','E','I','O','U'};
    int v;
    for (v = 0; v < 10; v++) {
        if (vocali[v] == l) {
            return 1;
        }
    }
    return 0;
}

// Ritorna 1 se l non è vocale
int isConsonante (char l) {
    if (l >= 65 && l <= 90 || l >= 97 && l <= 122 ) {
        if (isVocale(l) == 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}



void main () {

    char stringa [101];
    int letterCount [26];
    int consonanti = 0;
    int vocali = 0;
    int s;

    fgets(stringa, 101, stdin);

    for (s = 0; s < 26; s++) {
        letterCount[s] = 0;
    }

    for (s = 0; s < strlen(stringa); s++) {
        if (isVocale(toupper(stringa[s])) == 1) {
            letterCount[toupper(stringa[s])-65]++;
            vocali++;
        }
        if (isConsonante(toupper(stringa[s])) == 1) {
            letterCount[toupper(stringa[s])-65]++;
            consonanti++;
        }
    }
    
    for (s = 0; s < 26; s++) {
        printf("La lettera %c appare %d volte nella stringa\n", s+65, letterCount[s]);
    }
    printf("Totale vocali: %d   Totale: consonanti: %d\n", vocali, consonanti);

}