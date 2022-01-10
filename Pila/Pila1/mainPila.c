#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"


void manejaError(int);
void pedirDatos(PILA);
void mostrarDatos(PILA);
void arrePila(PILA, PILA);

void main()
{
	PILA P1, P2;
	crearPila(&P1);
	crearPila(&P2);
	pedirDatos(P1);	
	arrePila(P1, P2);
	mostrarDatos(P2);
}

//FUNCION pedir Datos
void pedirDatos(PILA S)
{
	int sal=0,e;
	do
	{
		printf("Ingrese dato: \n");
		scanf("%d",&e);
		apilar(S, e);
		printf("Desea seguir ingresando datos: SI(0),NO(1) \n");
		scanf("%d",&sal);
	}
	while(sal!=1);
}

//FUNCION Mostrar datos
void mostrarDatos(PILA S)
{
	do{
	printf("\n %d \n",desapilar(S));	
	}
	while(es_vaciaPila(S)==FALSE);
desapilar(S);
}

//FUNCION arreglar la pila
void arrePila(PILA S, PILA Z)
{
	do{
	apilar(Z,desapilar(S));	
	}
	while(es_vaciaPila(S)==FALSE);
}


//FUNCION MANEJAR ERROR
void manejaError(int e){
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia"};
	printf("%s",errores[e]);
}





