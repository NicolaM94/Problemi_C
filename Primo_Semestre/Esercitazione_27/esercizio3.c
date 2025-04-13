#include <stdio.h>
#include <string.h>

int main () {

    char stringa [5];
    int i;
    char c;

    i = 0;
    scanf("%c", &c);
    while (c != '\n') {
        stringa[i] = c;
        i++;
        scanf("%c", &c);
    }
    stringa[i] = '\0';

    printf("%s", stringa);
    printf("%d", strlen(stringa));

}