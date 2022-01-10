//complejo.h
#ifndef _complejo_
#define _complejo_
//ESTRUCTURA
typedef struct {
float real;
float imagi;

}Complejo;

//DEFINO TIPO DE DATO COMO COMPLEJO
typedef Complejo * COMPLEJO;

//FUNCIONES
COMPLEJO crearComplejo();
COMPLEJO asignarReal(COMPLEJO C1,float r);
COMPLEJO asignarImaginario(COMPLEJO C1,float ima);
float obtenReal(COMPLEJO C1);
float obtenImaginario(COMPLEJO C1);
COMPLEJO suma(COMPLEJO C1,COMPLEJO C2);
COMPLEJO resta(COMPLEJO C1,COMPLEJO C2);
COMPLEJO producto(COMPLEJO C1,COMPLEJO C2);
COMPLEJO division(COMPLEJO C1, COMPLEJO C2);
COMPLEJO modulo(COMPLEJO C1,COMPLEJO C2);

#endif
