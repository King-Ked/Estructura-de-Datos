#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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

void apilar(PILA S, float e)
{
	if(S->tope == TAMPILA-1)
	{
		manejaError(1);
		exit(0);
	}
	S->tope++;
	S->Pila[S->tope]=e;
}

float desapilar(PILA S)
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

float elemTope(PILA S)
{
	int v;
	v = desapilar(S);
	apilar(S,v);
	return v;
}

float evalua(PILA S, char *ent)
{
	float a,b;
	int pos=0;
	char op[1];
	double conv;

	while(ent[pos]!='\0')
	{
		*op=ent[pos++];
		switch(*op)
		{
		case '+':
			b=desapilar(S);
			a=desapilar(S);
			apilar(S,(a+b));
			break;
		case '-':
			b=desapilar(S);
			a=desapilar(S);
			apilar(S,(a-b));
			break;
		case '*':
			b=desapilar(S);
			a=desapilar(S);
			apilar(S,(a*b));
			break;
		case '/':
			b=desapilar(S);
			a=desapilar(S);
			if(b==0)
			{
				printf("Division sobre CERO");
				return 0;
				break;
			}
			apilar(S,(a/b));
			break;
		case '^':
			b=desapilar(S);
			a=desapilar(S);
			apilar(S,(pow(a,b)));
			break;
		default:
			conv = atof(op);
			apilar(S,conv);
		}
	}
	return (desapilar(S));
}

