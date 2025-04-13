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
altro valore per terminare)*/
#include <stdio.h>

int calc(int raggio, float *area, float *perimetro) {

    *area = raggio * raggio * 3.1415;
    *perimetro = raggio * 2 * 3.1415;

    return 1;
}

void main () {

    int raggio;
    float perimetro;
    float area;

    printf("Inserisci il raggio: \n");
    scanf("%d", &raggio);

    calc(raggio, &area, &perimetro);

    printf("Perimetro: %.2f   Area: %.2f\n", perimetro, area);

}