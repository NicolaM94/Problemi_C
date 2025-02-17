/*
 Scrivere un programma C per la registrazione e lo studio delle condizioni
meteorologiche in un certo periodo.
 Le condizioni meteorologiche di un giorno sono raccolte in una struttura “dati_meteo”
composta da: una struttura per la registrazione di data e ora, un float contenente la
temperatura, un float contenente la pressione atmosferica, un float contenente la
percentuale di umidità e un float contenente la quantità di pioggia caduta.
 Assumete che il programma gestisca al massimo 4 registrazioni in una struttura
archivio formata da un array di dati meteo e un intero rappresentante il numero di dati
registrati.
 Il programma deve stampare le statistiche di questi dati, utilizzando una struttura struct
statistiche la quale contiene i valori minimi/massimi/medi di
temperatura/pressione/umidità/pioggia
*/

#include <stdio.h>

typedef struct {
    int data; // 16022025
    int ora;  // 233059
} Tempo_T;


typedef struct {
    Tempo_T tempo;
    float temp;
    float press;
    float umid;
    float piogg;
} Registrazione_T;


typedef struct {

    float mintemp;
    float avgtemp;
    float maxtemp;

    float minpress;
    float avgpress;
    float maxpress;

    float minumid;
    float avgumid;
    float maxumid;

    float minpiogg;
    float avgpiogg;
    float maxpiogg;

} Statistiche_T;


int main () {

    Registrazione_T archivio [4];
    Statistiche_T statistiche;
    int i;

    int avg = 0;

    // Popolo l'archivio
    for (i = 0; i < 4; i++) {
        printf("Registrazione n. %d\n", i+1);
        printf("Inserisci data e ora: \n");
        scanf("%d %d", &archivio[i].tempo.data, &archivio[i].tempo.ora);

        printf("Inserisci temperatura, pressione, umidità e mm. di pioggia: \n");
        scanf("%f %f %f %f", &archivio[i].temp, &archivio[i].press, &archivio[i].umid, &archivio[i].piogg);
        printf("\n");
    }

    // Calcolo le statistiche
    // Temperatura
    statistiche.mintemp = archivio[0].temp;
    statistiche.maxtemp = archivio[0].temp;
    for (i = 0; i < 4; i++) {
        avg += archivio[i].temp;
        if (archivio[i].temp < statistiche.mintemp) {
            statistiche.mintemp = archivio[i].temp;
        }
        if (archivio[i].temp > statistiche.maxtemp) {
            statistiche.maxtemp = archivio[i].temp;
        }
    }
    statistiche.avgtemp = avg;


    // Pressione
    avg = 0;
    statistiche.minpress = archivio[0].press;
    statistiche.minpress = archivio[0].press;
    for (i = 0; i < 4; i++) {
        avg += archivio[i].press;
        if (archivio[i].press < statistiche.minpress) {
            statistiche.minpress = archivio[i].press;
        }
        if (archivio[i].press > statistiche.minpress) {
            statistiche.maxpress = archivio[i].press;
        }
    }
    statistiche.avgpress = avg;

    // Umidità
    avg = 0;
    statistiche.minumid = archivio[0].umid;
    statistiche.minumid = archivio[0].umid;
    for (i = 0; i < 4; i++) {
        avg += archivio[i].umid;
        if (archivio[i].umid < statistiche.minumid) {
            statistiche.minumid = archivio[i].umid;
        }
        if (archivio[i].umid > statistiche.minumid) {
            statistiche.maxumid = archivio[i].umid;
        }
    }
    statistiche.avgumid = avg;

    // Pioggia
    avg = 0;
    statistiche.minpiogg = archivio[0].piogg;
    statistiche.maxpiogg = archivio[0].piogg;
    for (i = 0; i < 4; i++) {
        avg += archivio[i].piogg;
        if (archivio[i].piogg < statistiche.piogg) {
            statistiche.minpiogg = archivio[i].piogg;
        }
        if (archivio[i].piogg > statistiche.piogg) {
            statistiche.maxpiogg = archivio[i].piogg;
        }
    }
    statistiche.avgpiogg = avg;


    printf( "%d %d %d %d %d %d %d %d %d %d %d %d ", 
    statistiche.mintemp, statistiche.maxtemp, statistiche.avgtemp, 
    statistiche.minpress, statistiche.maxpress, statistiche.avgpress,
    statistiche.minumid, statistiche.maxumid, statistiche.avgumid,
    statistiche.minpiogg, statistiche.maxpiominpiogg, statistiche.avgpiominpiogg,
    )

    return 1;
}