//Pila.h
#ifndef _Pila_
#define _Pila_
#define TAMPILA 100
#define TRUE 1
#define FALSE 0
//ESTRUCTURA
typedef struct
{
	char Pila[TAMPILA];
	int tope;
}Pila;

//DEFINO TIPO DE DATO COMO COMPLEJO
typedef Pila *PILA;

//FUNCIONES
void crearPila(PILA *);
int es_vaciaPila(PILA);
void apilar(PILA, int);
int desapilar(PILA);
int elemTope(PILA);

#endif
