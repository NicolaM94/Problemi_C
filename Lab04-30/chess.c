/*Su una scacchiera 8x8 sono posizionati due pezzi: il Re bianco e la Regina nera. Si scriva un programma in
linguaggio C che acquisisce le posizioni del Re e della Regina in termini di coordinate (x,y) assumendo che la
posizione (1,1) sia situata in basso a sinistra rispetto al giocatore. Il programma controlla prima che le
coordinate inserite siano valide; in particolare entrambi i pezzi devono trovarsi all’interno della
scacchiera ed inoltre non possono trovarsi nella stessa posizione. In seguito il programma determina se la
Regina è in posizione tale da poter mangiare il Re e visualizza un apposito messaggio specificando anche
in che direzione e per quante posizioni deve muoversi per mangiare. NB: La regina si può muovere in linee
rette verticalmente, orizzontalmente o in diagonale per il numero di caselle non occupate che trova.*/

#include <stdio.h>

// Una funzione per verificare la correttezza dei dati inseriti
// Ho solo spostato il check fuori dal main per leggibilità
int VerifyPosition (int x, int y) {
    if (x < 1 || x > 8 || y < 1 || y > 8) {
        return 0;
    }
    return 1;
}

int main () {

    int kx, ky, qx, qy;

    printf("Inserisci le coordinate del re: \n");
    scanf("%d %d", &kx, &ky);
    printf("Inserisci le coordinate della regina: \n");
    scanf("%d %d", &qx, &qy);

    // Verifica della posizione dei pezzi
    if (VerifyPosition(kx, ky) == 0) {
        printf("Errore: posizione del re non corretta\n");
    }
    else if (VerifyPosition(qx, qy) == 0) {
        printf("Errore: posizione della regina non corretta\n");
    }
    else if (kx == qx && ky == qy) {
        printf("Errore: i pezzi si sovrappongono\n");
    }

    else {
        // Verifica della vittoria
        // Se la regina è perpendicolare al re
        if (kx == qx || ky == qy) {
            printf("La regina mangia il re\n");
        }
        // Se la regina è sulla diagonale del re
        else if (qx - kx == qy - ky) {
            printf("La regina mangia il re\n");
        }
        else {
            printf("Il re è salvo\n");
        }
    }
    

    return 1;
}