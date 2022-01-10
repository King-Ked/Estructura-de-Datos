#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char nombre[30];
	float nota;
	int boleta;
}ESTUDIANTE;

void solicitarDatos(ESTUDIANTE *);
void mostrarDatos(ESTUDIANTE);

void main()
{
	ESTUDIANTE est;
	solicitarDatos(&est);
	mostrarDatos(est);
}

void solicitarDatos(ESTUDIANTE *est)
{
	printf("Introdusca el nombre \n");
	scanf("%[^\n]",est->nombre);
	getchar();
	printf("Introduzca la nota \n");
	scanf("%f",&est->nota);
	printf("Introdusca la boleta\n");
	scanf("%d",&est->boleta);
}

void mostrarDatos(ESTUDIANTE est)
{
	printf("Nombre %s \n", est.nombre);
	printf("Nota %f \n", est.nota);
	printf("Boleta %d \n", est.boleta);
}

