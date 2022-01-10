#include <stdio.h>
#include <stdlib.h>
#include "Fraccion.h"

void manejaError(int);
void solicitarDatos(FRACCION);
void mostrar(FRACCION);
void liberar(FRACCION, FRACCION, FRACCION);
int Solicitarampli();
void main(){
FRACCION F1,F2,F3;
int am;
F1 = crearFraccion();
F2 = crearFraccion();
F3 = crearFraccion();

solicitarDatos(F1);
solicitarDatos(F2);

printf("SUMA\n");
F3 = suma(F1,F2);
mostrar(F3);
printf("PRODUCTO\n");
F3 = producto(F1,F2);
mostrar(F3);
am=Solicitarampli();
printf("AMPLIFICACION\n");
F3 =  amplificacion(F1,F2,am,1);
mostrar(F3);
F3 =  amplificacion(F1,F2,am,2);
mostrar(F3);
liberar(F1,F2,F3);
}
//FUNCION SOLICITAR
void solicitarDatos(FRACCION F){
int num,de;

printf("Introduzca la parte del numerador:  ");
scanf("%d",&num);

printf("Introduzca la parte de denominador:  ");
scanf("%d",&de);

F = asignarNumerador(F,num);
F = asignarDenominador(F,de);
}
int Solicitarampli(){
int am;
printf("Introduzca a el valor de la amplificacion de fracciones:  ");
scanf("%d",&am);
return am;
}

//FUNCION MOSTRAR
void mostrar(FRACCION F){
printf("Numerador: %d\n",obtenNumerador(F));
printf("Denominador: %d\n",obtenDenominador(F));
}
//FUNCION MANEJAR ERROR
void manejaError(int e){
char * errores[]={"No hay memoria disponible"};
printf("%s",errores[e]);

}
//FUNCION LIBERAR
void liberar(FRACCION F1,FRACCION F2,FRACCION F3){
free(F1);
free(F2);
free(F3);
}







