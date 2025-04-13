/*Si scriva un programma C che definisce la funzione ricorsiva
int cifra_massima(int num) la quale deve restituire la cifra
massima nella rappresentazione decimale di num. Tale programma
dovrà inoltre definire un main che
- chiede all’utente di inserire un numero non negativo,
- chiama la funzione cifra massima per calcolarne la cifra massima
- stampa tale cifra massima trovata*/

#include <stdio.h>


int cifra_massima (int num) {

    if (num < 10) {
        return num;
    } else {
        if (num%10 > cifra_massima(num/10)) {
            return num%10;
        } else {
            return cifra_massima(num/10);
        }
    }
}


void main () {

    int num;

    do {
        scanf("%d", &num);
    } while (num < 0);

    printf("La cifra massima di %d è %d", num, cifra_massima(num));

}