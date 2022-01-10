#include <stdlib.h>
#include<stdio.h>
#include "Cola.h"


void manejaError(int);
//  FUNCIONES 
COLA crearCola()
{
	COLA S;
	S = (COLA)malloc(sizeof(Cola));
	if(S==NULL)
	{
		manejaError(0);
		exit(0);
	}
	S->primero = NULL;
	S->ultimo = NULL;
 	return S;
}

int es_vaciaCola(COLA S)
{
	if(S->primero==NULL && S->ultimo==NULL)
		return TRUE;
	else
		return FALSE;
}

void encolar(COLA S, int e)
{
	Nodo_Cola *nvo;
	nvo = crearNodo_Cola();
	nvo->dato = e;
	if(es_vaciaCola(S)==TRUE)
		S->primero = nvo;
	else
		S->ultimo->siguiente = nvo;
	S->ultimo = nvo;
}

int desencolar(COLA S)
{
	int v;
	Nodo_Cola *aux;
	if(es_vaciaCola(S) == TRUE)
	{
		manejaError(4);
		exit(0);
	}
	aux = S->primero;
	v = aux->dato;
	S->primero = aux->siguiente;

	if(S->primero==NULL)
		S->ultimo=NULL;

	free(aux);
	return v;
}

int primero(COLA S)
{
	int v;
	if(es_vaciaCola(S)==TRUE)
	{
		manejaError(4);
		exit(0);
	}
	v = S->primero->dato;
	return v;
}

Nodo_Cola *crearNodo_Cola()
{
	Nodo_Cola *nvo;
	nvo = (Nodo_Cola*)malloc(sizeof(Nodo_Cola));
	if(nvo==NULL)
	{
		manejaError(0);
		exit(0);
	}
	nvo->siguiente =NULL;
	return nvo;
}
