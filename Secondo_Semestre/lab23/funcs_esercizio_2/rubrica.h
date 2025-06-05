#define RUBRICADIM 10
#define NOMEDIM 128
#define NUMERODIM 128

typedef struct {
    char nome[NOMEDIM];
    char numero[NUMERODIM];
} contatto_t;

typedef struct {
    contatto_t contatti[RUBRICADIM];
} rubrica_t;

rubrica_t aggiungi_contatto (rubrica_t, contatto_t);

void elenca_contatti (rubrica_t);

void trova_numero (rubrica_t, char []);
