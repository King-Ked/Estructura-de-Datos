#include<stdio.h>
#include<stdlib.h>

void darDimension(int *);
void crearArreglo(int **, int);
void solicitarDatos(int *, int);
void mostrarDatos(int *, int);
void liberar(int*);
void promedio(int *, int);
void main(){

int *A, elem;
darDimension(& elem);
crearArreglo(&A, elem);
solicitarDatos(A, elem);
mostrarDatos(A, elem);
promedio(A, elem);
liberar(A);
}

void darDimension(int * elem){
printf("Dame el tamaño \n");
scanf("%d", elem);
}

void crearArreglo(int **A, int elem){
*A=(int*)malloc(sizeof(int)*elem);
if(*A == NULL){
printf("No hay memoria disponible... \n");
exit(0);}
}

void solicitarDatos(int *A, int elem){
int i;
printf("Introduzca los datos \n");
for(i=0; i<elem; i++){
printf("A[%d],  \n",i+1);
scanf("%d", &A[i]);
}
}

void mostrarDatos(int *A, int elem){
int i;
printf("Los elementos son \n");
    for(i=0; i<elem; i++)
    printf("A[%d]=%d \n",i+1, A[i]);
}

void liberar(int* A){
free(A);
}

void promedio(int *A, int elem){
int i,suma;
float prom;
suma=0;
for(i=0; i<elem; i++){
	suma = suma + A[i];
}
prom = suma/elem;
printf("El 'promedio es %f", prom);

}
