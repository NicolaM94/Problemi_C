#include <stdio.h>
#include <string.h>
#define DIM 25

/*prototipi delle funzioni*/
int anagramma(char*, char*);
int dimmianagrammi(char*);

int main(){
	char str[DIM+1];
	int num;
	
	scanf("%s",str);
	num=dimmianagrammi(str);
	printf("%d",num);
}


int anagramma(char *s1, char *s2){

    int i,j;
    int found;

    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; j)
    }

}

int dimmianagrammi(char *str1){

    FILE *fp;
    int count = 0;
    char buf[DIM];

    fp = fopen("dizionario.txt", "r");
    if (fp == NULL) {
        return -1;
    }
    while (fscanf(fp,"%s", buf) == 1) {
        if (anagramma(str1, buf) == 1) {
            count++;
        }
    }
    fclose(fp);
    return count;
}