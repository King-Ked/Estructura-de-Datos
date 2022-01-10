#include <stdio.h>
#include <stdlib.h>
#include "Pila.h"


void manejaError(int);
void pedirDatos(PILA);
void mostrarDatos(PILA);
void liberar(PILA, PILA);

void main()
{
	PILA P1;
	P1 = crearPila();
	pedirDatos(P1);	
	mostrarDatos(P2);
	liberar(P1,P2);	
}

//FUNCION pedir Datos
void pedirDatos(PILA S)
{
	int sal=0, elem=0;
	char e;
	do
	{
		printf("\n Introducir un elemento a la cesta [1]");	
		printf("\n Sacar un elemento de la cesta [2]");	
		printf("\n Salir del menu[3]");
		scanf("%d",sal);
		switch(sal)
		{
			case 1:
				do
				{
							printf("\n Que elemento desea ingresar: pan[1], jugo[2], carne[3], pescado[4], leche[5], huevo[6], fruta[7], cereal[8], galletas[9] o verdura[10] \n Salir[11]");
							scanf("%d",elem);
				switch(elem)
				{
					case 1:
						e = 'A';
						apilar(S, e);
						break;
					case 2:
						e = 'B';
						apilar(S, e);
						break;
					case 3:
						e = 'C';
						apilar(S, e);
						break;
					case 4:
						e = 'D';
						apilar(S, e);
						break;
					case 5:
						e = 'E';
						apilar(S, e);
						break;
					case 6:
						e = 'F';
						apilar(S, e);
						break;
					case 7:
						e = 'G';
						apilar(S, e);
						break;
					case 8:
						e = 'H';
						apilar(S, e);
						break;
					case 9:
						e = 'I';
						apilar(S, e);
						break;
					case 10:
						e = 'J';
						apilar(S, e);
						break;
				}
				}while(elem != 11);
				elem = 0;
				break;
			case 2:
do
				{
							e = desapilar(S);
							printf("\n Que elemento desea eliminar de la cesta: pan[1], jugo[2], carne[3], pescado[4], leche[5], huevo[6], fruta[7], cereal[8], galletas[9] o verdura[10] \n Salir[11]");
							scanf("%d",elem);
				switch(elem)
				{
					case 1:

						if(e==desapila)
						break;
					case 2:

						apilar(S, e);
						break;
					case 3:

						apilar(S, e);
						break;
					case 4:

						apilar(S, e);
						break;
					case 5:

						apilar(S, e);
						break;
					case 6:

						apilar(S, e);
						break;
					case 7:

						apilar(S, e);
						break;
					case 8:

						apilar(S, e);
						break;
					case 9:

						apilar(S, e);
						break;
					case 10:

						apilar(S, e);
						break;
				}
				}while(elem != 11);
				elem = 0;
				break;
		}
	
	}
	while(sal!=3);
}

//FUNCION Mostrar datos
void mostrarDatos(PILA S)
{
	do{
	printf("\n %d \n",desapilar(S));	
	}
	while(es_vaciaPila(S)==FALSE);
}


//FUNCION MANEJAR ERROR
void manejaError(int e){
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia"};
	printf("%s",errores[e]);
}

void liberar(PILA S,PILA S1){
	free(S1);
	free(S);

}



