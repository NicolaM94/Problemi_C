/*Scrivere un programma in C che acquisisce tre
numeri. Il programma verifica se i tre numeri possono
rappresentare le dimensioni dei lati di un triangolo:
devono essere valori positivi e la somma di due numeri
deve essere maggiore del terzo. In caso il controllo
fallisca, il programma deve stampare un apposito
messaggio di errore. Se il controllo è stato superato con
successo, il programma stabilisce che tipo di triangolo
è (isoscele, equilatero o scaleno) e stampa un apposito
messaggio a video.*/

#include <stdio.h>

int main () {

    int a,b,c;

    printf("Inserisci tre numeri che rappresentano i lati di un triangolo: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a+b<c) {
        printf("Non è possibile formare un triangolo con questi lati.\n");
    } else {
        if (a == b && b == c) {
            printf("Il triangolo è equilatero\n");
        } 
        else if (a == b) {
            printf("Il triangolo è isoscele\n");
        }
        else {
            printf("Il triangolo è scaleno\n");
        }
    }


    return 1;
}