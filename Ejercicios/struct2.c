#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char nombre[30];
	float nota;
	int boleta;
}ESTUDIANTE;

void crearEstudiante(ESTUDIANTE **);
void solicitarDatos(ESTUDIANTE *);
void mostrarDatos(ESTUDIANTE *);
void liberar(ESTUDIANTE *);

void main()
{
	ESTUDIANTE *est;
	crearEstudiante(&est);
	solicitarDatos(est);
	mostrarDatos(est);
	liberar(est);
}

void crearEstudiante(ESTUDIANTE **est)
{
	*est = (ESTUDIANTE *)malloc(sizeof(ESTUDIANTE));
	if(est==NULL)
	{
	printf("No hay memoria disponoble \n");
	exit (0);
	}
}
void solicitarDatos(ESTUDIANTE *est)
{
	printf("Introdusca el nombre \n");
	scanf("%[^\n]",est->nombre);
	printf("Introduzca la nota \n");
	scanf("%f", &est->nota);
	printf("Introdusca la boleta\n");
	scanf("%d",&est->boleta);
}
void mostrarDatos(ESTUDIANTE *est)
{
	printf("Nombre %s \n", est->nombre);
	printf("Nota %f \n", est->nota);
	printf("Boleta %d \n", est->boleta);
}
void liberar(ESTUDIANTE *est)
{
free(est);
}

