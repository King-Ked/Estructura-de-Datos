#include <stdio.h>
#include <stdlib.h>
#include "Complejo.h"

void manejaError(int);
void solicitarDatos(COMPLEJO);
int menu();
void mostrar(COMPLEJO);
void liberar(COMPLEJO, COMPLEJO, COMPLEJO);

void main(){
COMPLEJO C1,C2,C3;

C1 = crearComplejo();
C2 = crearComplejo();
C3 = crearComplejo();

solicitarDatos(C1);
solicitarDatos(C2);
for(;;){
switch(menu()){
case 1:
printf("SUMA\n");
C3 = suma(C1,C2);
mostrar(C3);
break;
case 2:
printf("RESTA\n");
C3 = resta(C1,C2);
mostrar(C3);
break;
case 3:
printf("PRODUCTO\n");
C3 = producto(C1,C2);
mostrar(C3);
break;
case 4:
printf("DIVISION\n");
C3 =  division(C1,C2);
mostrar(C3);
break;
case 5:
printf("MODULO\n");
C3 = modulo(C1,C2);
mostrar(C3);
break;

default:
liberar(C1,C2,C3);
exit(0);
break;

}
}

}
//FUNCION SOLICITAR
void solicitarDatos(COMPLEJO C){
float r,ima;

printf("Introduzca la parte real:  ");
scanf("%f",&r);

printf("Introduzca la parte imaginaria:  ");
scanf("%f",&ima);

C = asignarReal(C,r);
C = asignarImaginario(C,ima);
}

int menu(){
int op;
printf("1-suma\n");
printf("2-resta\n");
printf("3-multiplicacion\n");
printf("4-division\n");
printf("5-modulo\n");
printf("6-salir\n");
printf("Seleccione un opcion:  ");
scanf("%d",&op);
return op;
}

//FUNCION MOSTRAR
void mostrar(COMPLEJO C){
printf("\fREAL: %f\n",obtenReal(C));
printf("\fIMAGINARIO: %f\n",obtenImaginario(C));
}
//FUNCION MANEJAR ERROR
void manejaError(int e){
char * errores[]={"No hay memoria disponible"};
printf("%s",errores[e]);

}
//FUNCION LIBERAR
void liberar(COMPLEJO C1,COMPLEJO C2,COMPLEJO C3){
free(C1);
free(C2);
free(C3);
}







