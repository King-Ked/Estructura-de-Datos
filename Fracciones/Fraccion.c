#include <stdlib.h>
#include "Fraccion.h"

void manejaError(int);
//  FUNCIONES 
FRACCION crearFraccion(){

FRACCION F;
F=(FRACCION)malloc(sizeof(FRACCION));
if(F == NULL){
	manejaError(0);//Mensaje "Memoria no disponible"
	exit(0);
}
return F;
}

FRACCION asignarNumerador(FRACCION F, int num){
	F->nume = num;
return F;
}

FRACCION asignarDenominador(FRACCION F, int de){
F->deno = de;
return F;
}

int obtenNumerador(FRACCION F){
return (F->nume);
}

int obtenDenominador(FRACCION F){
return (F->deno);
}

FRACCION suma(FRACCION F1, FRACCION F2){
FRACCION F3;
float iz=0,der=0;
F3 = crearFraccion();
	if(obtenDenominador(F1)==obtenDenominador(F2)){
	F3 = asignarNumerador(F3,obtenNumerador(F1)+obtenNumerador(F2));
	
	F3 = asignarDenominador(F3, obtenDenominador(F1));	
	}
	else{
	F3 = asignarDenominador(F3, obtenDenominador(F1) * obtenDenominador(F2));		
	F3 = asignarNumerador(F3,( obtenNumerador(F1) * obtenDenominador(F2) )+(obtenNumerador(F2)*obtenDenominador(F1))); 
	}

return F3; 
}

FRACCION producto(FRACCION F1, FRACCION F2){
FRACCION F3;
F3 = crearFraccion();
F3 = asignarNumerador(F3,obtenNumerador(F1) * obtenNumerador(F2));
F3 = asignarDenominador(F3,obtenDenominador(F1) * obtenDenominador(F2));
return F3;
}

FRACCION amplificacion(FRACCION F1, FRACCION F2, int am, int op){
FRACCION F3;
F3 = crearFraccion();
if(op==1){
F3 = asignarNumerador(F3,obtenNumerador(F1) * am);
F3 = asignarDenominador(F3,obtenDenominador(F1) * am);
}
else{
F3 = asignarNumerador(F3,obtenNumerador(F2) * am);
F3 = asignarDenominador(F3,obtenDenominador(F2) * am);
}
return F3;
}

