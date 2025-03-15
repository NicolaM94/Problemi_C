/*Es 3: Scrivere un programma che acquisisce una stringa s di al
più 30 caratteri (senza spazi). Stampare 1 se è formata da 2
sottostringhe identiche, 0 in caso contrario. Ad esempio
«ciaociao» è formata da due sottostringhe identiche.*/

#include <stdio.h>
#include <string.h>
#define DIM 30

void main () {

    char stringa [DIM+1];
    int i, flag;

    printf("Inserisci una stringa (max %d caratteri): \n", DIM);
    scanf("%s", stringa);

    // Se la striga ha lunghezza dispari è impossibile sia composta da due sottostringhe uguali
    if (strlen(stringa) % 2 == 1) {
        printf("0");
    } else {
        flag = 1;
        // verifico ogni elemento in posizine i con il corrispettivo in posizione i+strlen/2: 0 -> 4, 1 -> 5, ...
        for (i = 0; i < strlen(stringa)/2 && flag == 1; i++) {
            if (stringa[i] != stringa[i + strlen(stringa)/2]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    
}