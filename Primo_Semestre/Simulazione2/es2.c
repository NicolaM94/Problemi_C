#include <stdio.h>
#define D 10

int main() {

	char a1[D];
    char a2[D];
	int i;
    int counter = 0;
    int flag = 0;
	
	for(i=0; i<D; i++) {
        scanf("%c",&a1[i]);
    }
		
	// Sostituisco i caratteri in a1
    for (i = 0; i < D; i++) {

        // Se sono numerici li sostituisco in a1
        if (a1[i]-48 >= 0 && a1[i]-48 <= 9) {
            a1[i] = '*';
        }
        // Se sono alfabetici (Stretatmente) allora li aggiunogin a2
        else if ( (a1[i] >= 65 && a1[i] <= 90) || (a1[i] >= 97 && a1[i] <= 122) ) {
            a2[counter] = a1[i];
            counter++;
        }
    }

    if (counter < D) {
        a2[counter] = -1;
    }

    
    // Stampa primo array
    for (i = 0; i < D; i++) {
        printf("%c ", a1[i]);
    }

    printf("\n");

    // Stampa secondo array
    for (i = 0; i < D && flag != 1; i++) {
        if (a2[i] != -1) {
            printf("%c ", a2[i]);
        }
        else {
            flag = 1;
        }
        
    }

	return 0;

}