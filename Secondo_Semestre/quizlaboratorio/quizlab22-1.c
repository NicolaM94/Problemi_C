#include<stdio.h>
#define DIM 10

/* prototipi */
int crea(int *,int *);
int somma(int);

int main() {
  int ar1[DIM], ar2[DIM], i,r;
	for(i=0; i<DIM; i++){
		scanf("%d",&ar1[i]);
	}
  r=crea(ar1,ar2);
  printf("%d",r);
  
  return (0);
}

int crea(int *arr1, int *arr2) {

    int i,j;
    int temp_somma;
    int inseriti = 0;
    int flag;

    arr2[0] = somma(arr1[0]);
    inseriti++;
    for (i = 1; i < DIM; i++) {
        temp_somma = somma(arr1[i]);
        flag = 0;
        for (j = 0; j < inseriti; j++) {
            if (arr2[j] == temp_somma) {
                flag = 1;
            }
        }
        if (flag == 0) {
            arr2[inseriti] = temp_somma;
            inseriti++;
        }
    }
    return inseriti;

}


int somma (int num) {
    if (num < 10) {
        return num;
    }
    return num%10 + somma(num/10);
}

