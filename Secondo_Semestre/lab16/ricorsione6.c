/*Scrivere una funzione ricorsiva
int cifra(int num, int k) che ritorna la k-esima
cifra di numero partendo da destra. Ad esempio
cifra(829,2) restituisce 2.*/

#include <stdio.h>

int cifra (int num, int k) {
    if (k == 1) {
        return num%10;
    } else {
        return cifra(num/10, k-1);
    }
}


void main () {
    int num, k;

    scanf("%d %d", &num, &k);

    printf("%d", cifra(num,k));

}