//complejo.h
#ifndef _fraccion_
#define _fraccion_
//ESTRUCTURA
typedef struct {
int nume;
int deno;

}Fraccion;

//DEFINO TIPO DE DATO COMO COMPLEJO
typedef Fraccion * FRACCION;

//FUNCIONES
FRACCION crearFraccion();
FRACCION asignarNumerador(FRACCION F1,int num);
FRACCION asignarDenominador(FRACCION F1,int de);
int obtenNumerador(FRACCION F1);
int obtenDenominador(FRACCION F1);
FRACCION suma(FRACCION F1,FRACCION F2);
FRACCION producto(FRACCION F1,FRACCION F2);
FRACCION amplificacion(FRACCION F1, FRACCION F2,int am,int op);

#endif
