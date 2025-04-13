/*Scrivere un programma che acquisisce due stringhe s1 ed s2 di al massimo 100 caratteri ciscuna.
Il programma verifica se s2 è presente in s1 e tutte le volte che compare sostituire il primo carattere di s2 in s1 con il carattere
X.*/

#include <stidio.h>
#include <string.h>
#define MAX 100
#define SEGNO 'X'

int main () {

    int len, n, i lenTmp, uguale;
    char stringa [MAX+1];
    char sottostringa[MAX+1];
    char c;
    
    // Acquisizione stringa;
    i = 0;
    scanf("%c", &c);
    while (c != '\n') {
        stringa[i] = c;
        i++;
        scanf("%c", &c);
    }
    stringa[i] = '\0';

    // Iserimento stringa s2
    i = 0;
        scanf("%c", &c);
        while (c != '\n') {
            sottostringa[i] = c;
            i++;
            scanf("%c", &c);
        }
        sottostringa[i] = '\0';

    lun = strlen(stringa);
    luntmp = strlen(sottostringa);

    n = 0;
    while (n < lun-luntmp+1) {
        
    }


    return 0;
}