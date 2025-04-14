#include <stdio.h>


void main () {

    FILE *fp;
    int reader;
    char carattere;

    fp = fopen("input1.txt", "r");
    if (fp == NULL) {
        return;
    }

    reader = fscanf(fp,"%c", &carattere);
    while (reader > 0) {
        printf("%c",carattere);
        reader = fscanf(fp,"%c", &carattere);
    }
    fclose(fp);
}