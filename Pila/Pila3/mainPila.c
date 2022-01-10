#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"


void manejaError(int);
void lee(char *ent);
void mostrarDatos(PILA, char *ent);

void main()
{
	char cad[TAMPILA];
	PILA P1;
	crearPila(&P1);
	lee(cad);
	mostrarDatos(P1, cad);
}




//FUNCION MANEJAR ERROR
void manejaError(int e){
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia"};
	printf("%s",errores[e]);
}

void lee(char *ent)
{
	int pos=0;
	printf("\n Evaluacion de expresiones Postfijas \n");
	printf("Operaciones Basicas: Suma, Resta, Producto, y Division\n\n");
	printf("\n\n Introduzca la expresion en Postfija: ");
	while((ent[pos++]=getchar())!='\n');
		ent[--pos]='\0';
}


void mostrarDatos(PILA S, char *ent)
{
	printf("\n\n\t %s = %.2f\n\n",ent,evalua(S, ent));	
}
