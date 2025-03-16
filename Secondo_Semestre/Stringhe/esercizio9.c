/*Dato il seguente tipo strutturato

typedef struct{
int voto;
int numstudenti;
}t_voti;

che memorizza per ogni voto quanti studenti hanno
totalizzato quel voto. Definire in un programma un
array di tipo t_voti per memorizzare quanti studenti
hanno totalizzato 18, quanti 19, …. quanti 30.
Ordinare poi l'array in ordine crescente per
frequenza e stampare l'array ottenuto.*/

#include <stdio.h>
#include "../../ordinamenti/naivesort.c"

typedef struct {
    int voto;
    int numstudenti;
} t_voti;

void main () {

    int voti [15] = {18,18,18,29,20,23,25,25,26,30,28,21,19,20,20};
    t_voti esiti [13];
    int n, ordered;
    t_voti temp;


    for (n = 18; n < 31; n++) {
        esiti[n-18].voto = n;
        esiti[n-18].numstudenti = 0;
    }

    for (n = 0; n < 15; n++) {
        esiti[voti[n]-18].numstudenti++;
    }

    // Bubble sort
    ordered = 0;
    while (ordered == 0) {
        ordered = 1;
        for (n = 0; n < 12; n++) {
            if (esiti[n].numstudenti > esiti[n+1].numstudenti) {
                temp = esiti[n+1];
                esiti[n+1] = esiti[n];
                esiti[n] = temp;
                ordered = 0;
            }
        }
    }

    for (n=0; n < 13; n++) {
        printf("%d : %d\n", esiti[n].voto, esiti[n].numstudenti);
    }

}