/*Scrivere un programma C che richiede all’utente 10 voti
(compresi tra 18 e 30, correggere gli errori) e li
memorizza all’interno di un array, quindi stampa l’array,
il voto massimo, minimo e medio.*/

#include <stdio.h>

int main () {

    int voti [10];
    int temp;
    int min = 30;
    int max = 0;

    printf("Inserisci i tuoi voti: \n");
    for (int i = 0; i<10; i++) {
        do {
            scanf("%d", &temp);
            if (temp < 18 || temp > 30) {
                printf("Il voto non è valido.\n");
            }
        } while (temp < 18 || temp > 30);
        voti[i] = temp;
        if (temp > max) {
            max = temp;
        };
        if (temp < min) {
            min = temp;
        };
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", voti[i]);
    }
    printf("\nMassimo: %d\n", max);
    printf("Minimo: %d\n", min);

    return 1;
}