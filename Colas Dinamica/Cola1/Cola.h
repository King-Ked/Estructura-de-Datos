//Cola.h
#ifndef _Cola_
#define _Cola_
#define TRUE 1
#define FALSE 0


typedef struct Nodo_Cola
{
	int dato;
	struct Nodo_Cola *siguiente;
}Nodo_Cola;


typedef struct
{
	Nodo_Cola *primero;
	Nodo_Cola *ultimo;
}Cola;


typedef Cola *COLA;

COLA crearCola();
int es_vaciaCola(COLA);
void encolar(COLA, int);
int desencolar(COLA);
int primero(COLA);
Nodo_Cola *crearNodo_Cola();
#endif
