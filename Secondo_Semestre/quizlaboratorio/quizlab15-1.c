#include<stdio.h>
#define DIM 10
int cambia(char *);

int main(){
	char stringa[DIM+1];
	int r;
	
	scanf("%s",stringa);
	
	r=cambia(stringa);

	printf("%s %d",stringa,r);

	return 0;

}

int cambia (char *s) {

    int sost = 0;
    int i;

    for (i = 0; i < DIM && *(s+i) != '\0'; i++) {
        if (*(s+i) >= 48 && *(s+i) <= 58) {
            *(s+i) = '*';
            sost++;
        }
    }

    return sost;

}