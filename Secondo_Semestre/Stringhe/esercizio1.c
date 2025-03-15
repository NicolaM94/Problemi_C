/*Es 1: Scrivere un programma che acquisisce una stringa di al
più 100 caratteri che può contenere spazi e segni di
punteggiatura. Il programma conta quante consonanti doppie
sono presenti nella stringa. NOTE: assumere che la stringa
NON sia vuota ed inoltre che non contenga lettere maiuscole.
Infine non possono verificarsi casi di consonanti triple o più.*/

#include <stdio.h>
#include <string.h>

int isVocale (char lettera) {
    if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u') {
        return 1;
    }
    return 0;
}

void main () {

    char stringa [101];
    int counter = 0;
    int i;
    int end = 0;
    char temp = 'a';

    for (i = 0; i < 101 && temp != 10; i++) {
        scanf("%c", &temp);
        if (temp != 10) {
            stringa[counter] = temp;
            counter++;
        }
    }
    stringa[counter] = '\0';
    counter = 0;

    for (i = 1; i < 101 && end != 1; i++) {
        if (stringa[i] == '\0') {
            end = 1;
        }else 
        if (stringa[i] == stringa[i-1] && !isVocale(stringa[i])) {
            counter++;
        }
    }

    
    printf("La stringa %s contiene %d consonanti doppie\n",stringa,counter );



}