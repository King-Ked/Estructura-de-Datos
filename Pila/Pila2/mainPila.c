#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include "Pila.h"


void manejaError(int);
void pedirDatos(PILA, char*);
void mostrarDatos(PILA, char*);
void arrePila(PILA, PILA);

void main()
{
	char cad[TAMPILA];
	PILA P1, P2;
	crearPila(&P1);
	crearPila(&P2);
	pedirDatos(P1, cad);	
	arrePila(P1, P2);
	mostrarDatos(P2, cad);
}

//FUNCION pedir Datos
void pedirDatos(PILA S, char *cad)
{	
	int i;
	printf("Ingrese la cadena:");
	scanf("%[^\n]",cad);
	for(i=0;cad[i]!='\0';i++)
	{
	apilar(S, cad[i]);
	}
	
}

//FUNCION Mostrar datos
void mostrarDatos(PILA S, char *cad)
{
	printf("La cadena original es:\n %s \n",cad);
	do{
	printf("\n %c \n",desapilar(S));	
	}
	while(es_vaciaPila(S)==FALSE);

}

//FUNCION arreglar la pila
void arrePila(PILA S, PILA Z)
{
	do{
		if(isupper(elemTope(S))==FALSE)
			desapilar(S);
		else
			apilar(Z,desapilar(S));	
	}
	while(es_vaciaPila(S)==FALSE);
}


//FUNCION MANEJAR ERROR
void manejaError(int e){
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia"};
	printf("%s",errores[e]);
}





