/*Scrivere un programma che chiede all'utente il
raggio di un cerchio. L'algoritmo calcola e
visualizza l'area di tale cerchio.*/

#include <stdio.h>

int main () {

    float input;

    printf("Inserisci il raggio di un cerchio: \n");
    scanf("%f", &input);
    printf("L'area del cerchio è pari a %.2f\n", input*3.1415*input);

    return 1;
}