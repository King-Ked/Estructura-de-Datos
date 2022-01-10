#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct datos
{
	char nombre[15];
	char ap_pater[15];
	char carrera[20];
	int edad;
}Datos;

typedef struct deportista
{
	Datos pers;	
	char deportes[30];
	int medallas;
}Deportista;

void numPers(int *);
void crearDepor(Deportista **, int);
void solicitarDatos(Deportista *, int);
//void mostrarDatos(Deportista *, int, int);
void liberar(Deportista *, int);


void main()
{
	int N;
	numPers(&N);
	Deportista *Dep;
	crearDepor(&Dep, N);
	solicitarDatos(Dep, N);
	//mostrarDatos(Dep, Pmay, Pmen);
	liberar(Dep, N);
}

void numPers(int *N)
{
	printf("Ingrese el numero de deportistas \n");
	scanf("%d", N);
}

void crearDepor(Deportista **Dep, int N)
{
	*Dep = (Deportista *)malloc(sizeof(Deportista)*N);
	if(Dep==NULL)
	{
	printf("No hay memoria disponoble \n");
	exit (0);
	}
}
void solicitarDatos(Deportista *Dep, int N)
{
int i;
	for(i=0;i<N;i++)
	{
		getchar();
		printf("Introdusca el nombre:[%d] \n", i+1);
		scanf("%[^\n]",Dep[i].pers.nombre);
		getchar();
		printf("Introdusca el apellido paterno:[%d] \n", i+1);
		scanf("%[^\n]",Dep[i].pers.ap_pater);
		getchar();
		printf("Introduzca el deporte que practica:[%d] \n", i+1);
		scanf("%[^\n]", Dep[i].deportes);
		getchar();
		printf("Introduzca la carrera:[%d] \n", i+1);
		scanf("%[^\n]", Dep[i].pers.carrera);
		getchar();
		printf("Introdusca la edad:[%d]\n", i+1);
		scanf("%d",&Dep[i].pers.edad);
		printf("Introdusca el numero de medallas:[%d]\n", i+1);
		scanf("%d",&Dep[i].medallas);
	}
}
void mostrarDatos(Deportista *emp, int Pmay, int Pmen)
{


}
void liberar(Deportista *Dep, int N)
{
free(Dep);
}

