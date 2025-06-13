#include <stdio.h>
#include <stdlib.h>
#define SEP ','
#define DIM 50
/*definizione della struttura per la lista concatenata*/
typedef struct elem_{
  int num;
  struct elem_ *next;
} elem;

/*prototipi delle funzioni*/
elem* crealista(char*, char);
void visualizza(elem*);

int main(){
	char str[DIM+1];
	elem* lista;
	
	scanf("%s",str);
	lista=crealista(str,SEP);
	visualizza(lista);
}


/* visualizza i numeri contenuti nella lista */
void visualizza(elem* lista){
  while(lista != NULL){
    if(lista->next != NULL)
			printf("%d -> ", lista->num);
		else printf("%d", lista->num);
    lista = lista->next;
  }
  printf("\n");  
}

/* analizza la stringa e inserisce un nuovo numero in coda alla lista */
elem* crealista(char *str, char sep){
	
    elem * headref;
    elem * head = NULL;
    elem * newNode;
    int i;

    head = (elem *) malloc(sizeof(elem));
    if (head ==NULL) {
        return NULL;
    }
    head -> num = 0;
    head -> next = NULL;
    headref = head;

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 48 && str[i] <= 57) {
            head -> num = head -> num * 10 + str[i]-48;
        } 
        else {
            newNode = (elem *)malloc(sizeof(elem));
            if (newNode == NULL) {
                return NULL;
            }
            newNode -> num = 0;
            newNode -> next = NULL;
            head -> next = newNode;
            head = head -> next;
        }

        
    }
    return headref;
    
	
	
	
	
}