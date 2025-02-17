/*Scrivere un programma C che chiede all’utente un
valore che rappresenta il peso in Kg e un valore
che rappresenta l’Altezza in metri e calcola l’indice
di massa corporeo, BMI = peso/ altezza^2*/

#include <stdio.h>

int main () {

    float input;
    float input2;

    printf("Inserisci il peso in kilogrammi: \n");
    scanf("%f", &input);
    printf("Inserisci l'altezza in metri: \n");
    scanf("%f", &input2);
    printf("Il corrispondente BMI (body mass indicator) è pari a: %.2f\n", input/(input2*input2));

    return 1;
}