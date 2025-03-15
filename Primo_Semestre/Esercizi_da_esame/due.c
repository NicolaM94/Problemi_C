/*Scrivere un programma che dato un numero intero positivo num
inserito da tastiera (correggere eventuali errori in inserimento) e un
array di 5 interi di nome cifre contenente tutti numeri maggiori o
uguali a zero composti da una sola cifra, verificare se tutte le cifre di
num sono presenti nell’array. Ad esempio se num vale 353 e l’array
è int cifre[]= {3, 3,0, 7, 4}, l’array non contiene tutte le cifre di num.*/

#include <stdio.h>

int main () {

    int input = 0;
    int array [5] = {1,2,3,4,5};
    int temp;
    int tempflag;
    int flag = 1;

    do {
        scanf("%d", &input);
    } while (input < 0);


    while (input > 0) {
        temp = input%10;
        tempflag = 0;
        for (int i = 0; i < 5; i++) {
            if (temp == array[i]) {
                tempflag = 1;
            }
        }
        if (tempflag == 0) {
            flag = 0;
        }
        input = input/10;
    }

    if (flag == 0) {
        printf("Non tutte le cifre sono contenute.\n");
    } else {
        printf("Tutte le cifre sono contenute.\n");
    }

    return 1;

}