#include <stdio.h>


int fib(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        printf("Chiamo fibonacci(%d) + fibonacci(%d)\n", n-1, n-2);
        return fib(n-1) + fib(n-2);
    }
}

int main () {

    printf("%d\n", fib(4));




}