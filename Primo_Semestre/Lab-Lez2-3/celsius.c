/*Scrivere un programma in C che chiede all'utente
un valore che rappresenta una temperatura in
gradi celsius, converte il valore in gradi Fahrenheit
e visualizza il risultato. NOTA: la formula per la
conversione è gradi_F = gradi_C x 1.8 + 32*/

#include <stdio.h>

int main () {

    float input;

    printf("Inserisci un valore in gradi celsius °C: \n");
    scanf("%f", &input);
    printf("Il corrispondente valore in Farenheit è pari a %.2f\n", input*1.8 + 32);

    return 1;
}