#include <stdlib.h>
#include<stdio.h>
#include "Pila.h"


void manejaError(int);
//  FUNCIONES 
PILA crearPila()
{
	PILA S;
	S = (PILA)malloc(sizeof(Pila));
	if(S==NULL)
	{
		manejaError(0);
		exit(0);
	}
	S->tope = NULL;
	return S;
}

Nodo_Pila* crearNodo_Pila()
{
	Nodo_Pila * nvo;
	nvo = (Nodo_Pila*)malloc(sizeof(Nodo_Pila));
	if(nvo==NULL)
	{
		manejaError(0);
		exit(0);
	}
	return nvo;

}

int es_vaciaPila(PILA S)
{
	if(S->tope==NULL)
		return TRUE;
	else
		return FALSE;
}

void apilar(PILA S, int e)
{
	Nodo_Pila *nvo;
	nvo = crearNodo_Pila();
	nvo->dato = e;
	nvo->anterior = S->tope;
	S->tope = nvo;
}

int desapilar(PILA S)
{
	int v;
	Nodo_Pila *aux;
	if(es_vaciaPila(S) == TRUE)
	{
		manejaError(2);
		exit(0);
	}
	v = S->tope->dato;
	aux = S->tope;
	S->tope = aux->anterior;
	free(aux);
	return v;
}

int elemTope(PILA S)
{
	int v;
	if(es_vaciaPila(S)== TRUE)
	{
		manejaError(1);
		exit(0);
	}
	v = S->tope->dato;
	return v;
}
