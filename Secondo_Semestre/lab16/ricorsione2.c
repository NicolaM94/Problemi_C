/*Si scrivano le versioni ricorsiva ed iterativa
(while) di una funzione double f(double a, int n) che
calcola il valore*/

#include <stdio.h>


double funIterativa (double n, double a) {
    double res = 0;
    while (n >= 1) {
        res += (a-n)/a;
        n--;
    }
    return res;
}

double funRicorsiva (double n, double a) {
    if (n == 1) {
        return (a-1)/a;
    } else {
        return ((a-n)/a) + funRicorsiva(n-1,a);
    }
}

void main () {
    double n, a;

    scanf("%lf", &n);
    scanf("%lf", &a);
    printf("Iterativa: %lf  Ricorsiva: %lf\n", funIterativa(n,a), funRicorsiva(n,a));
}