#include <stdio.h>
#include <stdlib.h>
#include "Cola.h"


void manejaError(int);
void pedirDatos(COLA);
void mostrarDatos(COLA);
void libera(COLA);

void main()
{
	COLA C1;
	C1 = crearCola();
	pedirDatos(C1);	
	mostrarDatos(C1);
	libera(C1);
}

//FUNCION pedir Datos
void pedirDatos(COLA S)
{
	int sal=0;
	int e;
	do
	{
		printf("Ingrese entero: \n");
		scanf("%d",&e);
		encolar(S, e);
		printf("Desea seguir ingresando entero: SI(0),NO(1) \n");
		scanf("%d",&sal);
		getchar();
	}
	while(sal!=1);
}

//FUNCION Mostrar datos
void mostrarDatos(COLA S)
{
	do{
	printf("\n %d \n",desencolar(S));	
	}
	while(es_vaciaCola(S)==FALSE);
}



//FUNCION MANEJAR ERROR
void manejaError(int e){
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia","La cola esta llena","La cola esta vacia"};
	printf("%s",errores[e]);
}

void libera(COLA S)
{
	free(S);
}



