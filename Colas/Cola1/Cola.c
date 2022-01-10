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
	S->primero = 0;
	S->ultimo = 0;
	S->tam = 0;
 	return S;
}

int es_vaciaCola(COLA S)
{
	if(S->tam==0)
		return TRUE;
	else
		return FALSE;
}

void encolar(COLA S, char e)
{
	if(S->tam == MAXCOLA)
	{
		manejaError(3);
		exit(0);
	}
	S->Cola[S->ultimo] = e;
	S->ultimo = sig(S->ultimo);
	S->tam = S->tam + 1;
}

char desencolar(COLA S)
{
	char v;
	if(es_vaciaCola(S) == TRUE)
	{
		manejaError(4);
		exit(0);
	}
	v = S->Cola[S->primero];
	S->primero = sig(S->primero);
	S->tam = S->tam-1;
	return v;
}

char primero(COLA S)
{
	char v;
	if(es_vaciaCola(S)==TRUE)
	{
		manejaError(4);
		exit(0);
	}
	v = S->Cola[S->primero];
	return v;
}

int sig(int i)
{
	int pos;
	pos = (i+1)%MAXCOLA;
	return pos;
}
