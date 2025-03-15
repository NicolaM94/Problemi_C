/*Scrivere un programma C che chiede all'utente
le coordinate di due punti a e b appartenenti al
piano cartesiano e disegna il perimetro del
rettangolo con i lati paralleli agli assi che ha il
segmento ab come diagonale. Le coordinate di a
e b devono essere intere e comprese tra 0 e 9.
Usare strutture per definire “punto” e
“rettangolo”.
Suggerimento: usare una matrice per aiutarsi a
stampare.*/

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Punto_T;


int main () {

    Punto_T a,b, min, max;
    int i,j;

    printf("Punto a\n");
    printf("Inserire l'ascissa (valore compreso tra 0 e 9): ");
    scanf("%d", &a.x);
    printf("Inserire l'ordinata (valore compreso tra 0 e 9): ");
    scanf("%d", &a.y);    

    printf("Punto b\n");
    printf("Inserire l'ascissa (valore compreso tra 0 e 9): ");
    scanf("%d", &b.x);
    printf("Inserire l'ordinata (valore compreso tra 0 e 9): ");
    scanf("%d", &b.y); 
    printf("\n");

    if (a.x < b.x) {
        min.x = a.x;
        max.x = b.x;
    } else {
        min.x = b.x;
        max.x = a.x;
    }

    if (a.y < b.y) {
        min.y = a.y;
        max.y = b.y;
    } else {
        min.y = b.y;
        max.y = a.y;
    }

    // Stampo la legenda sulla colonna a sinistra
    for (i = 9; i >= 0; i--) {

        printf("%d", i);

        // Se la riga coincide con il lato superiore o la base del rettangolo
        if (max.y == i || min.y == i) {
            // Percorro tutta la riga
            for (j = 0; j<9;j++) {
                // Stampo * negli indici compresi tra min.x e max.x
                if (j >= min.x && j <= max.x) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }
            }
        }

        // Se la riga è compresa tra il lato superiore e la base del rettangolo
        else if (max.y > i && min.y < i) {

            // Percorro tutta la riga
            for (j = 0; j<9;j++) {

                // Stampo * negli indici pari a minx a maxx
                if (j == min.x || j == max.x) {
                    printf("* ");
                }
                else {
                    printf("  ");
                }


            }

        }

        printf("\n");

    }

    // Stampo la legenda alla base 
    printf(" ");
    for (i = 0; i <= 9; i++) {
        printf("%d ", i);
    }








}