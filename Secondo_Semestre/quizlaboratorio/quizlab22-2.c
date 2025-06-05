#include<stdio.h>
#include<string.h>
#define FNAME "testo.txt"
#define MAXS 15
#define SOGLIA 3

int main(){
  int ok, i;
  FILE *fp;
  char p[MAXS+1];

  fp=fopen(FNAME,"r");
  
  if (fp == NULL) {
    return -1;
  }

  while (fscanf(fp,"%s",p) == 1) {
    ok = 0;
    for (i = 0; i < MAXS && p[i] != '\0'; i++ ) {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u') {
            ok++;
        }
    }
    if (ok >= 3) {

        for (ok = i-1; ok >= 0; ok--) {
            printf("%c", p[ok]);
        }
        printf(" ");
    }
  }

  fclose(fp);
}