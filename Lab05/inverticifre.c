/*Scrivere un programma che inverta la posizione
delle cifre di un numero intero inserito dall’utente
(4321 > 1234). Inoltre, il programma avvisa se il
numero inserito è palindromo (si legge allo stesso
modo da sinistra a destra e viceversa, es: 121, 32123,
…).*/

#include <stdio.h>

int main () {

    int input, copy;
    int inverted = 0;
    int temp;

    printf("Inserisci un numero: \n");
    scanf("%d", &input);

    copy = input;
    while (input > 0) {
        temp = input%10;
        inverted = inverted * 10 + temp;
        input = input / 10;
    }

    if (copy == inverted) {
        temp = 1;
    } else {
        temp = 0;
    }

    printf("Inverso: %d - Palindromo? %d\n", inverted, temp);

    return 1;
}