/*Con riferimento al linguaggio C, si supponga di avere definito la seguente struttura, che permette di memorizzare nome e cognome di una persona (entrambi come stringhe) e un puntatore al padre della persona:
struct pers{
	char *nome;
	char *cognome;
	struct pers *padre;
};
Si assuma di aver definito anche i seguenti alias:
typedef struct pers persona;
typedef struct pers *personaPtr;
Si scriva una funzione che preso in ingresso un parametro di tipo persona, stampi a video il nome e cognome della persona in questione e di suo padre.
Si scriva poi un programma che usa la funzione scritta.*/

#include<stdio.h>
#include<stdlib.h>

struct pers{
	char *nome;
	char *cognome;
	struct pers *padre;
};

typedef struct pers persona;
typedef struct pers *personaPtr;

void stampaPadre(persona p){
	printf("Persona: %s %s\n",p.nome,p.cognome);
	personaPtr pPtr=p.padre;
	if (pPtr != NULL)
		printf("Padre: %s %s\n",pPtr->nome,pPtr->cognome);
	else
		printf("Padre ignoto\n");
}

int main() {
	personaPtr newPtr = malloc(sizeof(persona)); // creo il padre
	if (newPtr != NULL) {
		newPtr->nome = "Mario";
		newPtr->cognome = "Rossi";
		newPtr->padre=NULL;
	}
	persona p = {"Luigi", "Rossi", newPtr}; // creo il figlio
	stampaPadre(p);
	personaPtr pPtr = &p;

	persona p2 = {"Giulio", "Rossi",pPtr}; // creo il figlio del figlio
	stampaPadre(p2);
}