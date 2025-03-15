/*Es2: Scrivere un programma che acquisisce due stringhe s1 ed
s2 di al massimo 100 caratteri ciascuna. Il programma verifica
se s2 è presente in s1 e tutte le volte che compare sostituisce il
primo carattere di s2 in s1 con il carattere X (è ammesso l’uso
solo di strlen).*/

#include <stdio.h>
#include <string.h>
#define DIM 5

void main () {

    char s1[DIM+1], s2 [DIM+2];
    int i;
    char temp;
    int stopFlag = 1;

    // Raccolgo il contenuto di s1
    for (i = 0; i < DIM+1 && stopFlag == 1; i++) {
        scanf("%c", &temp);
        if (temp != '\n') {
            s1[i] = temp;
        } else {
            stopFlag = 0;
        }
    }
    s1[i] = '\0';

    

    // Resetto stopFlag
    stopFlag = 1;

    // Raccolgo il contenuto di s2
    for (i = 0; i < DIM+1; i++) {
        scanf("%c", &temp);
        if (temp != '\n') {
            s2[i] = temp;
        } else {
            stopFlag = 0;
        }
    }
    s2[i] = '\0';

    // Pulisco il buffer dallo '\n' rimanente
    while (getchar () != '\n')
    

    printf("S1 %s", s1);
    printf("S2 %s", s2);
}