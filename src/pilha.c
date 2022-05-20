#include "pilha.h"

void FPVazia(Pilha *P) 
{
	P->T = (Bloco*)malloc(sizeof(Bloco));
	P->T->ant = NULL;
	P->F = P->T;
}

void InicializaItem(Item *I)
{
	I->x = 0;
	I->y = 0;
}


Item POP(Pilha *P) 
{
	Bloco *tmp;
	Item aux;
	
	if (P->T == P->F) {
		printf("PILHA VAZIA!");
		aux.x = -1;
		aux.y = -1;
	} else {
		tmp = P->T; 
		aux = P->T->dado;
		P->T = P->T->ant;
		free(tmp);
	}

	return aux;
};

void PUSH(Pilha *P, Item D) 
{
	Bloco *aux = (Bloco*)malloc(sizeof(Bloco));;
	aux->dado = D;
	aux->ant = P->T;
	P->T = aux;
};



