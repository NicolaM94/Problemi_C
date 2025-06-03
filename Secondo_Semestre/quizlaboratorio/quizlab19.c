/*Completare il programma definendo:

il sottoprogramma parola_valida che prende in input una stringa, un intero n ed un intero k e restituisce 1 s
e la stringa ricevuta in ingresso è lunga almeno n caratteri e contiene almeno k cifre (caratteri numerici), 0 altrimenti.

il sottoprogramma conta_valide che riceve in ingresso un intero n ed un intero k, apre il file "origine.txt" che contiene un insieme di parole,
e restituisce il numero delle parole valide (ovvero che contengono almeno n caratteri e almeno k cifre).

Le parole presenti nel file di origine sono di al più 25 caratteri, una per riga. Nel caso in cui ci siano problemi di accesso al file, il sottoprogramma restituisce -1. 

Per esempio, se il sottoprogramma riceve in ingresso 8 e 2, ed il file origine.txt contiene le parole: 
ammirato programmazione1 programmazione23 val1d023 il sottoprogramma stampa 2 (sono valide le parole programmazione23 e val1d023). */

#include <stdio.h>
#define DIM 25

/*prototipi delle funzioni*/
int parola_valida(char*,int,int);
int conta_valide(int,int);

int main(){
	int num;
	int ncar, ncifre;
	scanf("%d",&ncar);
	scanf("%d",&ncifre);
	num=conta_valide(ncar,ncifre);
	printf("%d\n",num);

}


int parola_valida(char *s1, int n, int k){
 
    int count_chars = 0;
    int count_nums = 0;

    while (*s1 != '\0') {
        count_chars++;
        if (*s1 >= '0' && *s1 <= '9') {
            count_nums++;
        }
        s1 = s1+1;
    }
    
    if (count_nums >= k && count_chars >= n) {
        return 1;
    }
    return 0;
}

int conta_valide(int n, int k) {

    FILE *fp;
    int counter = 0;
    char temp_string[DIM+1];

    fp = fopen("origine.txt","r");
    if (fp == NULL) {
        return -1;
    }

    while (fscanf(fp,"%s",temp_string) == 1) {
        
        if (parola_valida(temp_string, n, k)) {
            counter++;
        }
        
    }

    fclose(fp);
	return counter;
	
}