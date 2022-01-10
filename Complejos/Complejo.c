#include <stdlib.h>
#include<stdio.h>
#include "Complejo.h"

void manejaError(int);
//  FUNCIONES 
COMPLEJO crearComplejo(){

COMPLEJO C;
C=(COMPLEJO)malloc(sizeof(COMPLEJO));
if(C == NULL){
	manejaError(0);//Mensaje "Memoria no disponible"
	exit(0);
}
return C;
}

COMPLEJO asignarReal(COMPLEJO C, float r){
	C->real = r;
return C;
}

COMPLEJO asignarImaginario(COMPLEJO C, float ima){
C->imagi = ima;
return C;
}

float obtenReal(COMPLEJO C){
return (C->real);
}

float obtenImaginario(COMPLEJO C){
return (C->imagi);
}

COMPLEJO suma(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3 = crearComplejo();
	C3 = asignarReal(C3,obtenReal(C1)+obtenReal(C2));
	C3 = asignarImaginario(C3, obtenImaginario(C1)+obtenImaginario(C2));
	return C3; 
}

COMPLEJO resta(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3 = crearComplejo();
	C3 = asignarReal(C3,obtenReal(C1)-obtenReal(C2));
	C3 = asignarImaginario(C3, obtenImaginario(C1)-obtenImaginario(C2));
	return C3; 
}

COMPLEJO producto(COMPLEJO C1, COMPLEJO C2)
{
	COMPLEJO C3;
	C3 = crearComplejo();
	C3 = asignarReal(C3,(obtenReal(C1)*obtenReal(C2))-(obtenImaginario(C1)*obtenImaginario(C2)));
	C3 = asignarImaginario(C3,(obtenReal(C1)*obtenImaginario(C2))+(obtenReal(C2)*obtenImaginario(C1)));
	return C3;
}

COMPLEJO division(COMPLEJO C1,COMPLEJO C2)
{
	COMPLEJO C3;
	float real,imagi,divisor;
	divisor = ((obtenReal(C2)*obtenReal(C2))+(obtenImaginario(C2)*obtenImaginario(C2)));
	real=((obtenReal(C1)*obtenReal(C2))+((-1)*(obtenImaginario(C1)*obtenImaginario(C2))))/divisor;
	imagi=((obtenReal(C1)*obtenImaginario(C2))+(obtenReal(C2)*obtenImaginario(C1)))/divisor;
	C3 = crearComplejo();
	C3 = asignarReal(C3,real);
	C3 = asignarImaginario(C3,imagi);
	return C3;
}

COMPLEJO modulo(COMPLEJO C1,COMPLEJO C2){
COMPLEJO C3;
C3 = crearComplejo();

C3 = asignarReal(C3,((int)obtenReal(C1)) % ((int)obtenReal(C2)));
C3 = asignarImaginario(C3,((int)obtenImaginario(C1))%((int)obtenImaginario(C2)));
return C3;
}


