/*Scrivere un programma C che apre un file di testo
“input_Es13.txt” contenente parole ciascuna di al massimo
15 caratteri. Il programma identifica e stampa a video tutte
le parole che rappresentano un numero (cioè composte
soltanto da cifre). Ad esempio, se il file “input_Es13.txt”
contiene il testo:
oggi è il 30 marzo 2020 e per superare l’esame è necessario
prendere almeno 18 nella prova1 di programmazione
Il programma stamperà a video:
30
2020
18*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

// Verifica che una stringa sia un numero
int isNumber (char *array, int dim) {
    int i;
    for (i = 0; i < dim; i++) {
        if (array[i] < 48 || array[i] > 57) {
            return 0;
        }
    }
    return 1;
}


void main () {

    FILE *file_pointer;
    char buf[15];
    int rdr;

    file_pointer = fopen("input_Es12.txt", "r");

    if (file_pointer == NULL) {
        perror("Errore nell'apertura del file: ");
        exit(-1);
    }

    do {
        fscanf(file_pointer, "%s", buf);
        if (isNumber(buf, strlen(buf)) == 1) {
            printf("%s\n", buf);
        }
    } while (!feof(file_pointer));

    fclose(file_pointer);

}