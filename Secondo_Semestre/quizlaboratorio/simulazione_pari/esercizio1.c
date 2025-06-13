#include<stdio.h>

void repeatChar (char c, int times) {
    int i;
    for (i = 0; i < times; i++) {
        printf("%c", c);
    }
}

int main(){
  int n, d, type, i, j;

  // Acquisizione dati
  scanf("%d", &n);
  
  int m1[n][n];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m1[i][j]=0;
    }
  }
  
  scanf("%d", &d);
  scanf("%d", &type);

  if (type == 0) {

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if ( j >=1 && j <= d-1+1 && i <= n-2 && i >= n-2-d+1) {
                    printf("1");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }

  }
  else if (type == 1) {

        int temp = d;

        for (i = 0; i < n; i++) {
            if (i == n-1) {
                repeatChar('0',n);
            }
            else if (i <= n-2 && i >= n -2 -d +1) {
                printf("0");
                repeatChar('1',temp - d);
                repeatChar('0',n-temp+1);
                temp = temp -1;
            }
            else {
                repeatChar('0',n);
            }
            printf("\n");
        }
    
    }

    else if (type == 2) {







}




  
 
}