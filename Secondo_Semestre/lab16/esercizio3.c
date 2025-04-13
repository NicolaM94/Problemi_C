#include <stdio.h>

typedef struct {
    char parola [30];
    char word [30];
} trad_t;

typedef struct {
    trad_t traduzioni [100];
} dict_t;

void main () {
   
    dict_t dizionario;

    fgets(dizionario.traduzioni[0].parola, 30, stdin);
    fgets(dizionario.traduzioni[0].word, 30, stdin);

    printf("%s", dizionario.traduzioni[0].parola);
    printf("%s", dizionario.traduzioni[0].word);

}