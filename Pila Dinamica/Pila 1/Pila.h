//Pila.h
#ifndef _PilaDina_
#define _PilaDina_
#define TRUE 1
#define FALSE 0
//ESTRUCTURA

typedef struct Nodo_Pila
{
	int dato;
	struct Nodo_Pila *anterior;
}Nodo_Pila;



typedef struct 
{
	Nodo_Pila *tope;
}Pila;

//DEFINO TIPO DE DATO COMO COMPLEJO
typedef Pila *PILA;

//FUNCIONES
PILA crearPila();
Nodo_Pila* crearNodo_Pila();
int es_vaciaPila(PILA);
void apilar(PILA, int);
int desapilar(PILA);
int elemTope(PILA);

#endif
