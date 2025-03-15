/*crivere un programma che acquisisce una
stringa di al più 100 caratteri che può contenere spazi
e segni di punteggiatura. Il programma conta quante
sequenze di almeno due consonanti uguali adiacenti
sono presenti nella stringa. Esempio: ccccaafbb -> 2.*/
#include <stdio.h>
#include <string.h>
#define DIM 100

// Funzione che verifica se un carattere è una consonante
int Consonante(char l) {
    char vocali[] = "aeiouAEIOU";
    int i;
    
    if ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z')) { // Controllo se è una lettera
        for (i = 0; i < 10; i++) {
            if (l == vocali[i]) {
                return 0; // È una vocale
            }
        }
        return 1; // È una consonante
    }
    return 0; // Non è una lettera
}

int main() {
    char stringa[DIM];
    int count = 0;
    int i;

    // Acquisizione stringa
    fgets(stringa, DIM, stdin);

    // Rimuove il carattere '\n' se presente
    size_t len = strlen(stringa);
    if (len > 0 && stringa[len - 1] == '\n') {
        stringa[len - 1] = '\0';
        len--; 
    }

    // Scansione della stringa
    for (i = 0; i < len - 1; i++) {
        if (Consonante(stringa[i]) && stringa[i] == stringa[i + 1]) {
            int j = i + 1;
            while (j < len && stringa[j] == stringa[i]) {
                j++;
            }
            if (j - i >= 2) { // Se ho trovato almeno 2 consonanti uguali adiacenti
                count++;
            }
            i = j - 1; // Salto alla fine della sequenza
        }
    }

    printf("%d\n", count);
    
    return 0;
}