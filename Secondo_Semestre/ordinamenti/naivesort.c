/*Implementazione del naive sort (in place)*/

int naiveSort(int *array, int dim) {

    int sortFlag = 1;
    int i;
    int temp;

    while (sortFlag == 1) {

        sortFlag = 0;

        for (i=0; i < dim-1; i++) {

            if (array[i] > array[i+1]) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                sortFlag = 1;
            }
        }
    }
}

