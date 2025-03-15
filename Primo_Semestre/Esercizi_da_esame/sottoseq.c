/*dato array determinare la sottosequenza di valori
uguali di lunghezza massima, dove inizia e dove
finisce, a parità restituire la prima*/


#include <stdio.h>

int main () {

    int array [10] = {1,1,2,3,3,3,3,3,4,5};
    int i,j;

    int len = 0;
    int start, end;

    int templen, flag;

    for (i = 0; i < 10; i++) {

        templen = 0;
        flag = 0;

        for (j = i; j < 10 && flag == 0; j++) {
            if (array[j] == array[i]) {
                templen++;
            }
            else {

                if (templen > len) {
                    len = templen;
                    start = i;
                    end = j-1;
                }

                flag = 1;
            }

        }
    }

    

    printf("\n Len: %d Start: %d  End: %d\n", len, start, end);


    return 0;
}