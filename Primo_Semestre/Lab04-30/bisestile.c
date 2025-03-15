/*Scrivere un programma che chiede all'utente di
inserire un numero intero che corrisponde ad un anno
e visualizza 1 se l'anno è bisestile, 0 altrimenti. NOTA:
un anno è bisestile se è divisibile per 4 ma non per 100
o se è divisibile per 400.*/

#include <stdio.h>

int main () {

    int anno;

    printf("Inserisci un anno: \n");
    scanf("%d", &anno);

    if ((anno%4==0 && anno%100!=0) || anno%400==0) {
        printf("L'anno %d è bisestile.\n");
    } else {
        printf("L'anno non %d è bisestile.\n");
    }

    return 1;
}