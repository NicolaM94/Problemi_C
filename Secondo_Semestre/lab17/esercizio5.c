/*Definire la funzione ricorsiva
int monotono(int)
che restituisce 1 se il numero passato in ingresso è
monotono crescente (es. 137), 0 altrimenti.*/
#include <stdio.h>

int monotono (int numero) {

    if (numero < 10) {
        return 1;
    }
    if (numero%10 < (numero/10)%10) {
        return 0;
    } else {
        return monotono(numero/10);
    }
}

int main () {

    int numero;
    scanf("%d", &numero);

    printf("Il numero %d è monotono? %d\n", numero, monotono(numero));
}