/*Chiedere all’utente una sequenza di numeri interi
che termina con l’inserimento dello 0 (e in ogni
caso lunga al massimo 100 elementi). Creare un
array che contenga tutti e soli valori distinti della
sequenza (ovvero omettendo i duplicati).
Visualizzare l’array e il numero di elementi unici
inseriti.*/

#include <stdio.h>
#define T 100

int main () {

    int input = 1;
    int array[100];
    int out[100];
    int counter, flag;

    // Raccolta input
    counter = 0;
    for (int i = 0; i < 100 && input != 0; i++) {
        scanf("%d", &input);
        array[i] = input;
        counter++;
    }
  
    // Copia dell'array
    input = 1;
    counter = 0;
    for (int i = 0; i < 100 && input != 0; i++) {
        input = array[i];
        flag = 0;
        for (int j = 0; j < counter; j++) {
            if (out[j] == input) {
                flag = 1;
            }
        }
        if (flag == 0) {
            out[counter] = input;
            counter++;
        }
    }

    // Stampa risultato
    for (int i = 0; i < counter; i++) {
        printf("%d ", out[i]);
    }
    printf("\n");
    
    

    return 1;
}
