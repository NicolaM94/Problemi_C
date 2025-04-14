/*Scrivere un programma C che conta i valori compresi in un
intervallo [a, b] (a e b inseriti da tastiera) presenti in file di testo,
utilizzando le funzioni fscanf() e feof().
Esempio di contenuto del file di testo e di output del programma:
4 8 19 99 1 7 7 9 10 3 20 23 18
• $ ./a.out
Ci sono 5 valori nell'intervallo [10, 20]*/

#include <stdio.h>

void main () {

    int range_start, range_end;
    int red;
    int counter = 0;
    FILE *fp;

    scanf("%d %d", &range_start, &range_end);


    fp = fopen("fileinput.txt", "r");
    if (fp == NULL) {
        return;
    }

    while (!feof(fp)) {
        fscanf(fp,"%d ", &red);
        if (red > range_start && red < range_end) {
            counter++;
        }
    }
    fclose(fp);
    printf("%d\n",counter);
}