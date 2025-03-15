/*calcolare il fattoriale di un numero n, ad esempio
per n=5 avremo n!= 5*4*3*2*1 = 120*/

#include <stdio.h>

int main () {

    int number;
    int result = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &number);

    if (number != 0 && number != 1) {
        while (number > 0) {
        result *= number;
        number--;
    }
    }
    

    printf("%d\n", result);
    return 1;
}