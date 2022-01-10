#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void darDimension(int *);
void crearArreglo(float **, int);
void solicitarDatos(float *, int);
void radiones(float *, int);
void serie(float *, int);
void mostrarDatos(float *, int);
void liberar(float*);

void main(){

int elem;
float *A;
darDimension(& elem);
crearArreglo(&A, elem);

solicitarDatos(A, elem);

mostrarDatos(A, elem);
liberar(A);
}

void darDimension(int * elem){
printf("Dame el numero de Elementos \n");
scanf("%d", elem);
}

void crearArreglo(float **A, int elem){
*A=(float*)malloc(sizeof(float)*elem);
if(*A == NULL){
printf("No hay memoria disponible... \n");
exit(0);}
}

void solicitarDatos(float *A, int elem){
int i;
printf("Introduzca los datos \n");
for(i=0; i<elem; i++){
printf("A[%d],  \n",i+1);
scanf("%f", &A[i]);
}
}



void mostrarDatos(float *A, int elem){
int i;
printf("Los elementos son \n");
    for(i=0; i<elem; i++)
    printf("A[%d]=%f \n",i+1, A[i]);
}

void liberar(float *A){
free(A);
}


