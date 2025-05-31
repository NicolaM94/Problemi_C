#include <stdio.h>
#include <stdlib.h>
#include "./funcs_esercizio_1/operations.h"

int main () {

    int opcode;
    int i,j;
    void (*p[5]) (int x, int y) = {somma, sottrazione, prodotto, divisione, modulo};

    
    puts("Inserisci l'operazione da eseguire: (1/2/3/4/5 - Somma/Sottrazione/Prodotto/Divisione/Modulo)");
    scanf("%d", &opcode);
    puts("Inserisci i due numeri: ");
    scanf("%d %d",&i,&j);

    p[opcode-1](i,j);
    


}