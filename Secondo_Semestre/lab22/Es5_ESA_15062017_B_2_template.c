/*
Es5: Si modifichi il file ESA 15062017 B 2.c in modo tale che: 
- la funzione encode ritorni una stringa contenente per ciascuna letera della matrice di caratteri un numero di occorrenze di tale carattere pari al valore cntenuto nella stessa cella nella matrice numerica. I caratteri vanno inseriti analizzando le matrici da sinistra verso destra e dall’alto al basso;
- la funzione print_ma_mi stampi la matricd di caratteri (ma) e quella di valori numerci (mi) 
- la funzione get_size ritorni il numero di occorrenze totali delle lettere 
- l’output della funzione main sia il seguente: 
afk 
oup 
wej 

302 
201 
032 
Codifica: aaakkoopeeejj
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 3

char *encode(char ma[][DIM], int mi[][DIM], int size);
void print_ma_mi(char ma[][DIM], int mi[][DIM], int size);
int get_size(int mi[][DIM], int size);

void main(){
    char ma[DIM][DIM] = {{'a', 'f', 'k'}, {'o', 'u', 'p'}, {'w', 'e', 'j'}};
    int mi[DIM][DIM] = {{3, 0, 2}, {2, 0, 1}, {0, 3, 2}};
    int size = DIM;
    
    print_ma_mi(ma, mi, size);
    //printf("Total string size: %d\n", get_size(mi, DIM) );
    char *s = encode(ma, mi, size);
	printf("Codifica: %s\n", s);
	
}

char *encode(char ma[][DIM], int mi[][DIM], int size) {
    char *s;
    int i,j;
    int cnt;
    int total_s_size = 0;

    s = (char *)malloc(sizeof(char)*get_size(mi,DIM));

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Adding to the string the letter: %c\n", ma[i][j]);
            cnt = mi[i][j];
            printf("Cnt: %d\n", cnt );
            while (cnt > 0) {
                s[total_s_size] = ma[i][j];
                cnt--;
                total_s_size++;
            }
        }
    }
    s[total_s_size+1] = '\0';
    return s;
}

int get_size(int mi[][DIM], int size) {
    int count = 0;
    int i,j;
    for (i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            count += mi[i][j];
        }
    }
    return count;
}

void print_ma_mi(char ma[][DIM], int mi[][DIM], int size) {
    int i,j;

    for (i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%c", ma[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d", mi[i][j]);
        }
        printf("\n");
    }


}
