/*Scrivere un sottoprogramma che calcola l'area e il
perimetro di un cerchio di raggio dato. Il
sottoprogramma riceve come parametri un
numero in virgola mobile che rappresenta il
raggio del cerchio e altri due parametri, sempre
in virgola mobile, in cui verranno salvati i due
risultati richiesti. Scrivere un programma che
chiede all'utente la lunghezza del raggio del
cerchio, calcola mediante la funzione sopra e
visualizza il perimetro e l'area del cerchio. In
seguito il programma chiede all'utente se vuole
continuare o meno (0 per continuare, qualsiasi
altro valore per terminare).*/

#include <stdio.h>
#include <math.h>

void calcola (float raggio, float *area, float *perimetro) {
    *area = raggio * raggio * M_PI;
    *perimetro = raggio * 2 * M_PI; 
}

void main () {
    float raggio;
    float area;
    float perimetro;

    scanf("%f", &raggio);
    calcola(raggio, &area, &perimetro);
    printf("Area: %f    Perimetro: %f\n", area, perimetro);
}