/*Scrivere un programma che chiede in input una stringa
(senza spazi) di al massimo 50 caratteri e verifica che la stringa
sia ben parentesizzata. Una stringa è ben parentesizzata se le
parentesi (che possono essere solo tonde) sono chiuse
correttamente nell’ordine in cui vengono aperte. Esempio di
stringa ben parentesizzata: bla(bla)(bla(bla))(bla()(bla)())*/
#include <stdio.h>

void main () {

    char stringa [51];
    int i;
    int counter = 0;
    int flag = 1;

    scanf("%s", stringa);

    for (i = 0; i < 51; i++) {
        if (stringa[i] == ')') {
            counter--;
        }
        if (stringa[i] == '(') {
            counter++;
        }
        // Se il contatore diventa negativo, significa che ho aggiunto una parentesi destra ) prima di una sinistra, il che renderà sempre la stringa non corretta
        if (counter < 0) {
            flag = 0;
        }
    }

    if (flag == 0) {
        printf("Flag: Non è correttamente parametrizzata\n");
    } 
    // Se il contatore è diverso da 0 c'è una parentesi destra o sinistra in più
    else if (counter != 0) {
        printf("Non è correttamente parametrizzata\n");
    } else {
        printf("E' correttamente parametrizzata\n");
    }




}