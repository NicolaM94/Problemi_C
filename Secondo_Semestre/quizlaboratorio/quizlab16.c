#include <stdio.h>
#include <string.h>

#define N 30

int main() {
    char s1[N + 1];
    char s2[N + 1];
    char s3[2 * N + 1];

    scanf("%30s", s1);
    scanf("%30s", s2);

    if (strcmp(s1, s2) <= 0) {
        strcpy(s3, s1);
        strcat(s3, s2);
    } else {
        strcpy(s3, s2);
        strcat(s3, s1);
    }

    printf("%s\n", s3);
    return 0;
}
