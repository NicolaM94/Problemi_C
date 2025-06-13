#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct nodo{
	int num;
	struct nodo *next;
}node;


//prototipi, è possibile aggiungere funzioni
void visualizza(node *);
node* unione(node *, node*);
node* inserisciincoda(node*, int);

int main(){
	node *l1=NULL;
	node *l2=NULL;
	node *l;
	int val;
	
	scanf("%d",&val);
	while(val!=-99){
		l1=inserisciincoda(l1,val);
		scanf("%d",&val);
	}
	visualizza(l1);	
	scanf("%d",&val);
	while(val!=-99){
		l2=inserisciincoda(l2,val);
		scanf("%d",&val);
	}
	visualizza(l2);
	
	l=unione(l1,l2);
	visualizza(l);
	
	return 0;
}


void visualizza(node* lista){
  while(lista != NULL){
    if(lista->next!= NULL)
		printf("%d -> ", lista->num);
	else 
		printf("%d", lista->num);
    lista = lista->next;
  }
  printf("\n");  
}


node* inserisciincoda(node* lista, int num){
  
    node * currentHead;
    node * headref;
    currentHead = (node *) malloc(sizeof(node));
    currentHead -> num = num;
    currentHead -> next = NULL;
    if (lista == NULL) {
        return currentHead;
    }
    headref = lista;
    while (lista -> next != NULL) {
        lista = lista -> next;
    }
    lista -> next = currentHead;
    return headref;
}




node* unione(node *l1, node *l2) {
    
    node * currentHead = NULL;
    node * newNode = NULL;
    node * headref = NULL;
    int val = 0;

    while (l1 != NULL || l2 != NULL) {

        if (l1 == NULL) {
            val = l2 -> num;
            l2 = l2 -> next;
        }
        else if (l2 == NULL) {
            val = l1 -> num;
            l1 = l1 -> next;
        }
        else if (l1-> num < l2 -> num) {
            val = l1 -> num;
            l1 = l1 -> next;
        }
        else {
            val = l2 -> num;
            l2 = l2 -> next;
        }

        newNode = (node *) malloc(sizeof(node));
        newNode -> num = val;
        newNode -> next = NULL;

        if (headref == NULL) {
            headref = newNode;
            currentHead = newNode;
        }
        // Aggiungo un nodo solo se val è pari, oppure se val è dispari ma non è già presente in lista
        else if (val%2 == 0 || currentHead -> num != val) {
            currentHead -> next = newNode;
            currentHead = currentHead -> next;
        }
    }
    return headref;

}



