//Cola.h
#ifndef _Cola_
#define _Cola_
#define MAXCOLA 100
#define TRUE 1
#define FALSE 0

//ESTRUCTURA
typedef struct
{
	char Cola[MAXCOLA];
	int primero;
	int ultimo;
	int tam;
}Cola;

//DEFINO TIPO DE DATO COMO COMPLEJO
typedef Cola *COLA;

//FUNCIONES
COLA crearCola();
int es_vaciaCola(COLA);
void encolar(COLA, char);
char desencolar(COLA);
char primero(COLA);
int sig(int);
#endif
