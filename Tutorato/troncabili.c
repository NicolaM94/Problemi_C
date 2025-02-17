#include <stdio.h>



int rightprime (int numero) {

    int primo = 0;
    int i;

    while (numero > 0 && primo == 0) {

        for (i = 2; i < numero; i++) {
            if (numero%i==0) {
                primo = 1;
            }
        }

        numero = numero / 10;

    }

    return primo;
}

int main () {

    int input;
    int primo = 0;

    scanf("%d", &input);

    printf("%d", !rightprime(input));





}