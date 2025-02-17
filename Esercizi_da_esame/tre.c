/*Chiamiamo coppia di quadrati (CQ) una coppia <a,b> di
numeri interi che sono uno il quadrato dell’altro. Esempio
<9,3> oppure <-3,9> (infatti 9=3*3).
Si codifichi un programma C che legge da tastiera una
sequenza che termina con 99 (di lunghezza a priori
illimitata) di numeri interi e stampa a video quante
coppie di numeri consecutivi all’interno della sequenza
rappresentano una CQ.
Ad esempio: 2 4 16 0 3 9 99 contiene 3 CQ: <2,4>
<4,16> e <3,9>*/

#include <stdio.h>

/*L'idea è di raccogliere input dopo input e confrontarlo sempre con quello precedente, che sposto
di volta in volta all'interno di una variabile chiamata 'last'. Utilizzando un contatore, se l'attuale input è quadrato di last o viceversa,
incremento il contatore. Alla fine, stampo il contatore che sarà pari a quante coppie di quadrati ho trovato durante l'inserimento.*/


int main () {

    int input;
    int last;
    int counter;

    // Inserisco il primo scan direttamente in last, tanto sarebbe comunque finito li subito dopo
    scanf("%d", &last);

    do {
        scanf("%d", &input);
        if (input != 99) {
            if (input == last * last || last == input * input) {
            counter++;
            }
            last = input;
        }
    } while (input != 99);

    printf("%d", counter);

    return 1;
}