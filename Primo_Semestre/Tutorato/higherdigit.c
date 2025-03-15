#include <stdio.h>

int higherdigit (int n, int m) {

    int countern = 0;
    int counterm = 0;
    int highest = 0;
    int current;

    while (n > 0) {
        current = n%10;
        if (current > highest) {
            highest = current;
        }
        n = n / 10;
        countern++;
    }

    while (m > 0) {
        current = m%10;
        if (current > highest) {
            highest = current;
        }
        m = m / 10;
        counterm++;
    }


    if (countern != counterm) {
        return -1;
    }
    
    return highest;

}

int main () {


    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", higherdigit(a,b));

    return 1;

}