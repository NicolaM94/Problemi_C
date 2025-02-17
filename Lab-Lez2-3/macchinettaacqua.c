/*Scrivere in linguaggio C un programma per calcolare il
numero di bottigliette d’acqua che si possono comprare
alla macchinetta. Il programma, dopo aver chiesto
all’utente i soldi a disposizione, stampa a video il numero
di bottigliette che possono essere acquistate e il resto da
ricevere dopo l’acquisto. Il prezzo di ciascuna bottiglietta è
di 40 centesimi. Si supponga che la cifra a disposizione sia
positiva e che la macchinetta abbia in giacenza un numero
illimitato di bottigliette. Per erogare il resto, la
macchinetta utilizza pezzi da 20, 10, 5 e 1 centesimi: il
programma dovrà calcolare il numero di monete di resto di
ciascun taglio, prediligendo l’utilizzo di monete di taglio
maggiore (ad esempio, se il resto è di 0.37 €, il programma
dovrà restituire: 1*20 cent, 1*10 cent, 1*5 cent, 2*1 cent).
Suggerimento: moltiplicare il valore della cifra a
disposizione per 100 per ottenere il numero di centesimi ed
eseguire il cast del valore ad int.*/

#include <stdio.h>
#define PRICE 40

int main () {

    float input;
    int money;
    int bottles;
    int change;
    int out;

    printf("Inserisci il denaro a disposizione: \n");
    scanf("%f", &input);

    money = (int)(input * 100);

    bottles = money / PRICE;

    change = money - bottles * PRICE;

    printf("Resto: € 0.%d\n", change);
    
    out = change / 20;
    printf("Monete da 20: %d\n", out);
    change -= out * 20;

    out = change / 10;
    printf("Monete da 10: %d\n", out);
    change -= out * 10;

    out = change / 5;
    printf("Monete da 5: %d\n", out);
    change -= out * 5;

    printf("Monote da 1: %d\n", change);

    return 1;
}