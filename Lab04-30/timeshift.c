/*Scrivere un programma in C che richiede
all’utente di inserire ore e minuti, calcola l’ora a
San Francisco (9 ore indietro) e a Teheran (+3:30)
e la stampa a video in formato «0-24 h : min». Se a
Teheran è già il giorno successivo o a San
Francisco ancora quello precedente, il programma
corregge l’ora e avvisa l’utente con un opportuno
messaggio a schermo.*/

#include <stdio.h>

int main () {

    int h,m;
    int sfh;
    int th, tm;

    printf("Inserisci l'ora corrente (hh:mm): \n");
    scanf("%d:%d", &h, &m);

    // Gestisce il cambio con San Francisco
    sfh = (h-9)%24;
    // Se l'orario è negativo, ricalcola togliendo dalla mezzanotte
    if (sfh < 0) {
        sfh = 24 + sfh;
    }
    printf("A San Francisco sono le ore %d:%d\n", sfh, m);

    th = (h+3)%24;
    tm = m+30;
    if (tm > 59) {
        th++;
        tm -= 60;
    }
    printf("A Teheran sono le ore %0d:%0d\n", th, tm);
    
    return -1;
}