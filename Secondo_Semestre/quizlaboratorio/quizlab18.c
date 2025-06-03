/*Scrivere un sotto-programma C che conta i valori compresi in un intervallo [a, b] presenti in file di testo, utilizzando le funzioni fscanf() e feof().*/
#include <stdio.h>
/**
 * Conta i valori contenuti in un file di testo nell'intervallo [a, b]
 */
int count_in_range(char filename[], int a, int b) {
    FILE *fp;
    
    char temp;
    int number_read = 0;
    int count = 0;

    fp = fopen(filename,"r");
    if (fp == NULL) {
        return -1;
    }

    while (!feof(fp)) {

        fscanf(fp, "%d ",  &number_read);
        if (number_read >= a && number_read <= b) {
            count++;
        }
    }
    fclose(fp);

    return count;
}

int main () {

    printf("%d", count_in_range("testo.txt", 0,20));

}