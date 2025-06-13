#include<stdio.h>
#include<string.h>
#define DIM 25

/* prototipi delle funzioni */
int estrai(char *, char *, char *);
int conta(int);

int main(){
	char nome[20];
	char p,u;
	int num;
	FILE *fid;
	char str2[DIM+1];


	scanf("%s",nome);
	fid=fopen(nome,"r");
	if(fid==NULL)
		printf("Errore apertura file");
	else{
		fscanf(fid,"%s",str2);
		while(!feof(fid)){
			num=estrai(str2,&p,&u);
			printf("%d %c %c %d\n",num,p,u,conta(num));

			fscanf(fid,"%s",str2);
		}
		fclose(fid);
	}
	return 0;

}
//funzione che estrae un numero da una stringa, salva nel parametro prima la prima lettera minuscola trovata e in ultima l'ultima
int estrai(char *s1, char *prima, char *ultima) {

    int i;
    int calc;

    *prima = 0;
    *ultima = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 97 && s1[i] <= 122) {
            if (*prima == 0) {
                *prima = s1[i];
            }
            *ultima = s1[i];
        }
    }

    calc = (*ultima) - (*prima);
    if (calc < 0) {
        return (-1) * calc;
    }
    return calc;
}


// FUNZIONE RICORSIVA che conta le cifre pari
int conta(int n) {

    if (n < 10) {
        if (n%2 == 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        if ( (n%10)%2 == 0) {
            return 1 + conta(n/10);
        } else {
            return 0 + conta(n/10);
        }
    }
    
}
