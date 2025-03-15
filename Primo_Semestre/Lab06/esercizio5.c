/*Scrivere un programma C che:
 Richiede all’utente di inserire 20 caratteri e li salva in un
array.
 Produce due risultati:
 Una array costruito con i caratteri inseriti in cui ogni
vocale (mauiscola o minuscola) è sostituita da un numero
corrispondente (A=1, E=2, I=3, O=4, U=5).
 Un numero contenente la somma delle cifre (caratteri da 0
a 9) contenute nella stringa prodotta.*/

#include <stdio.h>
#define M 20

int main () {

    char array [M];
    char out [M];
    int sum = 0;

    for (int i = 0; i < M; i++) {
        scanf(" %c", &array[i]);
    }

    for (int i = 0; i < M; i++) {

        if (array[i] == 'A' || array[i] == 'a') {
            out[i] = '1';
            sum++;
        }
        else if (array[i] == 'E' || array[i] == 'e') {
            out[i] = '2';
            sum += 2;
        }
        else if (array[i] == 'I' || array[i] == 'i') {
            out[i] = '3';
            sum += 3;
        }
        else if (array[i] == 'O' || array[i] == 'o') {
            out[i] = '4';
            sum += 4;
        }
        else if (array[i] == 'U' || array[i] == 'u') {
            out[i] = '5';
            sum += 5;
        }
        else {
            out[i] = array[i];
            if (array[i] >= 48 && array[i] <= 57) {
                sum++;
            }
        }
    }
printf("\n");
    for (int i = 0; i < M; i++) {
        printf("%c", out[i]);
    }
    printf("\nSomma: %d\n", sum);


    return 1;
}