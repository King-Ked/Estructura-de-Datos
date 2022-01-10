#include <stdlib.h>
#include<stdio.h>
#include "Pila.h"


void manejaError(int);
//  FUNCIONES 
void crearPila(PILA *S)
{
	*S = (PILA)malloc(sizeof(Pila));
	if(*S==NULL)
	{
		manejaError(0);
		exit(0);
	}
	(*S)->tope = -1;
}

int es_vaciaPila(PILA S)
{
	if(S->tope<0)
		return TRUE;
	else
		return FALSE;
}

void apilar(PILA S, int e)
{
	if(S->tope == TAMPILA-1)
	{
		manejaError(1);
		exit(0);
	}
	S->tope++;
	S->Pila[S->tope]=e;
}

int desapilar(PILA S)
{
	int v;
	if(es_vaciaPila(S) == TRUE)
	{
		manejaError(2);
		exit(0);
	}
	v = S->Pila[S->tope];
	S->tope--;
	return v;
}

int elemTope(PILA S)
{
	int v;
	v = desapilar(S);
	apilar(S,v);
	return v;
}
