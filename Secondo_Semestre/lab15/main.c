#include <stdio.h>
#include "../ordinamenti/naivesort.c"

int main () {

    int arr [5] = {2,1,3,5,4};
    int i;

    naiveSort(arr, 5);

    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }

}