#include <stdio.h>

int main () {

    char array [10] = {'a','b','b','d','g','f','a','e','r','z'};
    int k,i; 


    scanf("%d", &k);

    if (k%2==0) {

        

        for (i = 0; i < 10; i++) {
            
            if (array[i] == 'z') {
                array[i] = 'a';
            }
            else {
                array[i] = array[i]+1;
            }   
        }

    } else {

        for (i = 0; i < 10; i++) {
            if (array[i] == 'a') {
                array[i] = 'z';
            }
            else {
                array[i] = array[i]-1;
            }

        }
    }


    for (i = 0; i < 10; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
