/* Operazioni da eseguire per l'esercizio 1 */
/* Codice */

#include "operations.h"
#include <stdio.h>

void somma (int a, int b) {
    printf("%d",a+b);
}

void sottrazione (int a, int b) {
    printf("%d", a-b);
}

void prodotto (int a, int b) {
    printf("%d", a*b);
}

void divisione (int a, int b) {
    printf("%.2f", (float)(a)/b);
}

void modulo (int a, int b) {
    printf("%d", a%b);
}