/*Scrivere un programma in C che chiede all’utente
una numero in virgola mobile. Il programma calcola
e visualizza su due righe separate la parte intera e
quella decimale di tale numero.
Ad esempio, nel caso in cui l’utente inserisce il
numero 4.14, il programma visualizzerà:
4
0.14*/

#include <stdio.h>

int main () {

    float input;

    printf("Inserisci un numero decimale: \n");
    scanf("%f", &input );

    printf("Parte intera: %d\n", (int)(input));
    printf("Parte decimale: %f\n", input - (int)(input));

    return 1;
    
}