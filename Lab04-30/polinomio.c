/*Scrivere un programma in C che richiede
all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0. Se a è
pari a zero, il programma informa che il polinomio
è di grado inferiore al secondo. In caso contrario, il
programma calcola il determinante (det)
dell’equazione di secondo grado e informa l’utente
se le soluzioni sono reali e distinte (det>0),
coincidenti (det=0) o complesse coniugate (det<0).*/

#include <stdio.h>

int main () {

    float a, b, c;
    float det;

    printf("Inserisci i coefficienti del polinomio (a, b, c): \n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Il polinomio è di grando inferiore al secondo.\n");
    } else {
        det = b*b - 4 * a * c;
        if (det > 0) {
            printf("Ci sono due soluzioni reali distinte.\n");
        } else if (det == 0) {
            printf("Ci sono due soluzioni reali coincidenti.\n");
        } else {
            printf("Le soluzioni sono complesse coniugate.\n");
        }
    }

    return 1;
}