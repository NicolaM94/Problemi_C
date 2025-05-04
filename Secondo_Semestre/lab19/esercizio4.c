/*Si definisca una procedura ricorsiva:
void sommesucc(int a[], int dim, int pos)
che, ricevuto in ingresso un array a di interi, la sua dimensione e
un altro parametro che contiene la posizione corrente, stampi a
video gli interi dell’array di ingresso il cui valore è uguale alla
somma dei due interi seguenti nell’array (a tal fine, gli ultimi due
numeri di un array sono automaticamente esclusi).
Ad esempio, se invocata con a = [5, 6, 4, 2, 1, 1, 3, 1], la procedura
deve stampare [6, 2]. Infatti, considerando il primo valore (5): i
due valori successivi sono 6 e 4, e la loro somma vale 10; quindi 5
è scartato. Per il secondo valore, pari a 6, la somma dei due valori
successivi è proprio 6 e quindi il valore viene selezionato per la
stampa.*/

#include <stdio.h>

int sommesucc (int [], int, int);

int main () {

    int a[8] = {5, 6, 4, 2, 1, 1, 3, 1};
    sommesucc(a,8,0);
    return 0;
}

int sommesucc (int a[], int dim, int pos) {
    
    if (pos >= dim-2) {
        return 0;
    } else {
        if (a[pos] == a[pos+1] + a[pos+2]) {
            printf("%d\n", a[pos]);
        }
        return a[pos] + sommesucc(a, dim, pos+1);
        
    }


}