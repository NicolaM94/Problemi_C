#include <stdio.h>


int main(){
    int m1[3][3]={
        {1,0,0},
        {0,1,0},
        {0,0,1},
    };
    float m2[3][3];
    int somma;
    int n;

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            somma=0;
            n=0;
            for(int r=i-1; r<=i+1; r++){
                for(int c=j-1; c<=j+1; c++){
                    if(r< 3 && r>=0 && c< 3 && c>=0){
                        somma+=m1[r][c];
                        n++;
                    }
                }
            }
            m2[i][j]=(float)somma/n;
        }
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j  < 3; j ++){
         printf("%.2f ",m2[i][j]);
    }
    printf("\n");
}

    return 0; 
}